#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*t1;
	unsigned char		*t2;
	size_t					counter;
	int							diff;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		diff = t1[counter] - t2[counter];
		if (diff != 0)
			break ;
		++counter;
	}
	return (diff);
}
