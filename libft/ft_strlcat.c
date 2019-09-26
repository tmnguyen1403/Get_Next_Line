#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(dst);
	l2 = ft_strlen(src);
	if (dstsize > l1)
	{
		ft_strncpy(dst + l1, src, dstsize);
		dst[dstsize - 1] = '\0';
		return (l1 + l2);
	}
	return (l2 + dstsize);
}
