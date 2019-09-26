#include "libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int index;

	if (s == 0)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &(s[index]));
		++index;
	}
}
