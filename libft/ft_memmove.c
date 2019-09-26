#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *tmp;

	if (dst == 0 && src == 0)
		return (0);
	tmp = (void *)malloc(len * sizeof(void));
	ft_memcpy(tmp, (void *)src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	tmp = 0;
	return (dst);
}
