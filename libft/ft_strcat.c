#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	size_t	l1;

	l1 = ft_strlen(s1);
	ft_strcpy(s1 + l1, s2);
	return (s1);
}
