#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *result;

	result = (void *)malloc(size * sizeof(void));
	if (result == 0)
		return (0);
	return ft_memset(result, 0, size);
}
