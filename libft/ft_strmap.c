#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char		*result;
	size_t	length;
	size_t	counter;

	if (s == 0)
		return (0);
	length = ft_strlen(s);
	result = (char *)malloc((length + 1) * sizeof(char));
	if (result == 0)
		return (0);
	result[length] = '\0';
	counter = 0;
	while (counter < length)
	{
		result[counter] = f(s[counter]);
		++counter;
	}
	return (result);
}
