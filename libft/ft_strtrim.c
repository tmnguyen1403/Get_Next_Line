#include "libft.h"

static int					is_spaces(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static unsigned int trim_space_front(char const *s)
{
	unsigned int index;

	index = 0;
	while (s[index] && is_spaces(s[index]))
		++index;
	return (index);
}

static unsigned int trim_space_end(char const *s)
{
	unsigned int	index;
	size_t				length;

	length = ft_strlen(s);
	if (length == 0)
		return (0);
	index = length - 1;
	while (index > 0 && is_spaces(s[index]))
	{
		--index;
	}
	return (index);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	size_t				l_trim;

	if (s == 0)
		return (0);
	if (*s == '\0')
		return ((char *)ft_memalloc(1));
	start = trim_space_front(s);
	end = trim_space_end(s);
	if (end < start)
		l_trim = 0;
	else
		l_trim = end - start + 1;
	return ft_strsub(s, start, l_trim);
}
