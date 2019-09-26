#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char		*sub;
	size_t	l_s;

	l_s = ft_strlen(s);
	if (start + len - 1 >= l_s)
	 	return (0);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	counter = 0;
	while (counter < len)
	{
		sub[counter] = s[start + counter];
		++counter;
	}
	sub[len] = '\0';
	return (sub);
}
