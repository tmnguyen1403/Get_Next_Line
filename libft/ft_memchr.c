#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char find;
	size_t				counter;

	str = (unsigned char *)s;
	find = (unsigned char)c;
	counter = 0;
	while (counter < n)
	{
		if (str[counter] == find)
			break ;
		++counter;
	}
	if (counter == n)
		return (0);
	return ((void *)(str + counter));
}
