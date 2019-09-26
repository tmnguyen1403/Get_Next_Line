#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	size_t	counter;

	if (s1 == 0 && s2 == 0)
		return (1);
	if (s1 == 0 || s2 == 0)
		return (0);
	counter = 0;
	while (s1[counter] && s2[counter])
	{
		if ((s1[counter] - s2[counter]) != 0)
			break ;
		++counter;
	}
	if ((s1[counter] - s2[counter]) != 0)
		return (0);
	return (1);
}
