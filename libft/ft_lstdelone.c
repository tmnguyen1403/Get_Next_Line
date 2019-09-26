#include "libft.h"

/**free the memory of the link's content using the function del
**free the link's memory using free
**the memory of next must not be freed
**the pointer to the link that was just freed is set to null
**/
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst || *alst == 0)
		return ;
	tmp = *alst;
	del(tmp->content, tmp->content_size);
	free(*alst);
	*alst = 0;
}
