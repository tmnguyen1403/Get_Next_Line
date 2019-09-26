#include "libft.h"

static void		*cpn_content(void const *content, size_t content_size)
{
	char		*result;
	char		*tmp;
	size_t	index;

	result = malloc(content_size * sizeof(char));
	if (result == 0)
		return (0);
	tmp = (char *)content;
	index = 0;
	while (index < content_size)
	{
		result[index] = tmp[index];
		++index;
	}
	return ((void *)result);
}

t_list				*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == 0)
		return (0);
	if (content == 0)
	{
		node->content = 0;
		node->content_size = 0;
	}
	else
	{
		node->content_size = content_size;
		node->content = cpn_content(content, content_size);
		if (node->content == 0)
		{
			free(node);
			node = 0;
			return (0);
		}
	}
	node->next = 0;
	return (node);
}
