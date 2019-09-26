#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*curr;

	if (lst == 0)
		return ;
	curr = lst;
	while (curr)
	{
		f(curr);
		curr = curr->next;
	}
}
