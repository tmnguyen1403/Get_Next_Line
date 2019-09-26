#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t				count;
	unsigned char	*result;
	unsigned char *fill;

	if (dst == 0 && src == 0)
		return (0);
	result = (unsigned char *)dst;
	fill = (unsigned char *)src;
	count = 0;
	while (count < n)
	{
		result[count] = fill[count];
		++count;
	}
	return (dst);
}
