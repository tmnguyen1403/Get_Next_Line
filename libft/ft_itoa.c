#include "libft.h"

static void		cpn_rev(char *dst, const char *src, size_t n)
{
	size_t index;

	index = 0;
	while (n > 0)
	{
		dst[index] = src[n];
		--n;
		++index;
	}
	dst[index] = src[n];
	dst[index + 1] = '\0';
}

static char		*ft_zero()
{
	char *result;

	result = (char *)malloc(2 * sizeof(char));
	if (result == 0)
		return (0);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

static int		ft_abs(int n)
{
	return (n < 0 ? n * -1 : n);
}

char					*ft_itoa(int n)
{
	char		s[14];
	char		*result;
	size_t	length;
	size_t	sign;

	if (n == 0)
		return ft_zero();
	sign = (n < 0 ? 2 : 1);
	length = 0;
	while (n != 0)
	{
		s[length] = ft_abs(n % 10) + '0';
		n = n / 10;
		++length;
	}
	result = ft_strnew(length + sign);
	if (result == 0)
		return (0);
	if (sign == 2)
		result[0] = '-';
	cpn_rev(result + sign - 1, (const char*)s, length - 1);
	return (result);
}
