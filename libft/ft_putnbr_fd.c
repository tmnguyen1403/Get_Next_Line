#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int		sign;
	int		power;
	char	c;

	if (fd < 0)
		return ;
	power = 1;
	sign = (n < 0 ? -1 : 1);
	while ((n / power) >= 10 || (n / power) <= -10)
		power *= 10;
	if (sign == -1)
		write(fd, "-", 1);
	while (power > 0)
	{
		c = (n / power) * sign + '0';
		write(fd, &c, 1);
		n %= power;
		power /= 10;
	}

}
