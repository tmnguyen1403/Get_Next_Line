#include	"libft.h"

char		*ft_strdup(const char *s1)
{
	char		*s2;
	size_t	length;
	size_t	counter;

	length = ft_strlen(s1);
	s2 = (char *)malloc((length + 1) * sizeof(char));
	if (s2 == 0)
		return (0);
	if (length == 0)
		return (s2);
	s2[length] = '\0';
	counter = 0;
	while (counter < length)
	{
		s2[counter] = s1[counter];
		++counter;
	}
	return (s2);
}
