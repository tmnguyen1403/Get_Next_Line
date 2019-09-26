#include "libft.h"

static void	generate_segv(const char *haystack, const char *needle)
{
	char c;

	c = haystack[0];
	c = needle[0];
}

char		*ft_strstr(const char *haystack, const char *needle)
{
		size_t	l_needle;
		int			diff;
		char		*first;

		if (ft_strcmp(needle, "") == 0)
			return ((char *)haystack);
		generate_segv(haystack, needle);
		l_needle = ft_strlen(needle);
		first = (char *)haystack;
		while (first)
		{
			first = ft_strchr(first, needle[0]);
			if (first)
			{
				diff = ft_strncmp((const char *)first, needle, l_needle);
				if (diff == 0)
					return (first);
				first = first + 1;
			}
		}
		return (0);
}
