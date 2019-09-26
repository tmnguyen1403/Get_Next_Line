#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
		char		t;
		size_t	counter;
		char		*result;

		t = (char)c;
		result = 0;
		counter = 0;
		while (s[counter])
		{
			if (s[counter] == t)
				result = (char *)&s[counter];
			++counter;
		}
		if (s[counter] == t)
			return ((char *)&s[counter]);
		return (result);
}
