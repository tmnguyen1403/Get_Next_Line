#include "libft.h"

int	ft_tolower(int c)
{

	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
	return (int)c;
}
