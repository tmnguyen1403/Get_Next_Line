#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s == 0)
		return ;
	ft_putstr(s);
	ft_putchar('\n');
}
