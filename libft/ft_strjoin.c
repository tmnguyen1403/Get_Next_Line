#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l_s1;
	size_t	l_s2;
	size_t	length;
	char		*result;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	length = l_s1 + l_s2;
	result = (char *)malloc((length + 1) * sizeof(char));
	if (result == 0)
		return (0);
	ft_strncpy(result, s1, l_s1);
	ft_strncpy(result + l_s1, s2, l_s2);
	result[length] = '\0';
	return (result);
}
