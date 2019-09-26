#include "libft.h"

static int	check_diff(int diff)
{
		if (diff > 0)
			return (1);
		if (diff < 0)
			return (-1);
		return (0);
}

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	diff;

	while (n > 0  && *s1 == *s2 && *s1 && *s2)
	{
		--n;
		if (n == 0)
			break ;
		++s1;
		++s2;
	}
	diff = (unsigned char)*s1 - (unsigned char)*s2;
	return check_diff(diff);
}
