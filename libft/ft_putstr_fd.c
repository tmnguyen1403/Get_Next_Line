#include "libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	size_t	length;

	if (fd < 0 || s == 0)
		return ;
	length = ft_strlen(s);
	write(fd, s, length);
}
