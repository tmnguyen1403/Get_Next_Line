#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	size_t	counter;

	counter = 0;
	while (src[counter])
	{
		dst[counter] = src[counter];
		++counter;
	}
	dst[counter] = '\0';
	return (dst);
}
