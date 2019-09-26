#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*old_head;

	if (alst == 0 || new == 0)
		return ;
	old_head = *alst;
	*alst = new;
	// while (new && new->next)
	// 	new = new->next;
	new->next = old_head;
}
