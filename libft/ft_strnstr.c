#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*tmp;
	size_t	counter;

	counter = 0;
	tmp = (char *)needle;
	while (counter < len && *tmp)
	{
		if (haystack[counter] == *tmp)
			++tmp;
		else
		{
			tmp = (char *)needle;
			if (haystack[counter] == *tmp)
				++tmp;
		}
		++counter;
	}
	if (*tmp)
		return (0);
	return ((char *)haystack + counter - ft_strlen(needle));
}
