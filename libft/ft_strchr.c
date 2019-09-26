#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
		char		t;
		size_t	counter;

		t = (char)c;
		counter = 0;
		while (s[counter] && s[counter] != t)
			++counter;
		if (s[counter] == t)
			return ((char *)&s[counter]);
		return (0);
}
