#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

//need to use ft_strncpy
//ft_strnew
//ft_strdel

static ssize_t	find_newline(const char *s)
{
		ssize_t	index;

		index = 0;
		while (s[index])
		{
			if (s[index] == '\n')
				return (index);
			++index;
		}
		return (-1);
}

int get_next_line(const int fd, char **line)
{
	ssize_t		ret;
	char			s[BUFF_SIZE];
	ssize_t		counter;
	size_t		length;
	char			*n_line;

	line = 0;
	ret = read(fd, s, BUFF_SIZE);
	if (ret <= 0)
		return (ret); // end of file
	counter = find_newline((const char*)s);
	if (counter == -1)
		return (-1);
		//save current string
		//continue reading
	if (counter > 0)
	{
		length = (size_t)counter;
		n_line = ft_strnew(length + 1);
		ft_strncpy(n_line, (const char *)s, length);
		*line = n_line;
		return (1);
	}
			//malloc new string, size = counter
			//*line = new_string
			//return 1;
	if (counter == 0)
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	char s[BUFF_SIZE];
	char *line;

	ac = 0;
	av = 0;
	printf("%zd\n", read(1, s, BUFF_SIZE));
	line = 0;
	get_next_line(1, &line);
	return (1);
}
