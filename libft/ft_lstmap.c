#include "libft.h"

static void	remove_content(void *content, size_t content_size)
{
	if (content && content_size > 0)
		free(content);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*curr;
	t_list	*new;
	t_list	*result;

	if (lst == 0 || f == 0)
		return (lst);
	curr = lst;
	new = f(curr);
	result = new;
	if (new == 0)
		return (0);
	while (curr->next)
	{
		curr = curr->next;
		new->next = f(curr);
		if (new->next == 0)
		{
			ft_lstdel(&result, remove_content);
			return (0);
		}
		new = new->next;
	}
	return (result);
}
