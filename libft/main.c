#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	ft_putnbr(123);
	write(1, "\n", 1);
	ft_putnbr(INT_MAX);	
	write(1, "\n", 1);
	ft_putnbr(INT_MIN);	
	write(1, "\n", 1);
	ft_putnbr(0);	
	write(1, "\n", 1);
	ft_putnbr(9);	
	write(1, "\n", 1);
	ft_putnbr(10);	
	write(1, "\n", 1);
	ft_putnbr(-9);	
	write(1, "\n", 1);
	ft_putnbr(-10);	
	write(1, "\n", 1);
}
