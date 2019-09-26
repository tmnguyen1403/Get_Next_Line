#include "libft.h"

static int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

static char	*handle_space(const char *str)
{
	char *result;

	result = (char *)str;
	while (*result && is_space(*result))
		++result;
	return (result);
}

int			ft_atoi(const char *str)
{
	char	*s;
	int		sign;
	int		result;

	s = handle_space(str);
	sign = 0;
	if (*s == '+')
		sign = 1;
	else if (*s == '-')
		sign = -1;
	s += sign * sign;
	result = 0;
	while (ft_isdigit(*s))
	{
		if (result == 0)
			result = result + (*s - '0');
		else
			result = result * 10 + (*s - '0');
		++s;
	}
	if (sign != 0)
		result = result * sign;
	return (result);
}
