#include "libft.h"

/**delete the whole list using del and free
**the pointer to the link that was just freed is set to null
**/
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*curr;
	t_list	*next;

	if (alst == 0 || *alst == 0)
		return ;
	curr = *alst;
	while (curr != 0)
	{
		next = curr->next;
		ft_lstdelone(&curr, del);
		curr = next;
	}
	*alst = 0;
}
