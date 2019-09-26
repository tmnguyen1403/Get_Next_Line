#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	unsigned char *fill;
	unsigned char	*result;
	unsigned char	t;
	size_t				counter;

	fill = (unsigned char *)src;
	result = (unsigned char *)dst;
	t = (unsigned char)c;
	counter = 0;
	while (counter < n && fill[counter] != t)
	{
		result[counter] = fill[counter];
		++counter;
	}
	if (counter == n)
		return (0);
	return (((void *)result) + counter + 1);
}
