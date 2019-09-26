#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *result;
	void *tmp;

	if (size == 0)
		return (0);
	tmp = ft_memalloc(size * sizeof(char));
	if (tmp == 0)
		return (0);
	result = (char *)tmp;
	return (result);
}
