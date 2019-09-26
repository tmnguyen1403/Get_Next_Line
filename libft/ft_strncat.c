#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	l1;

	l1 = ft_strlen(s1);
	ft_strncpy(s1 + l1, s2, n);
	return (s1);
}
