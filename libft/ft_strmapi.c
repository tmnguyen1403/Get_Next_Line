#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		result[counter] = f((unsigned int)counter, s[counter]);
		++counter;
	}
	return (result);
}
