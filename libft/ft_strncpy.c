#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	counter;

	counter = 0;
	while (counter < len && src[counter])
	{
		dst[counter] = src[counter];
		++counter;
	}
	while (counter < len)
	{
		dst[counter] = '\0';
		++counter;
	}
	return (dst);
}
