#include "libft.h"

static size_t		find_word(char const *s, char de)
{
	size_t	length;

	length = 0;
	while (s[length] && s[length] != de)
	{
		++length;
	}
	return (length);
}

static size_t		word_count(char const *s, char de)
{
	size_t	length;
	size_t	nb_words;
	char		*ts;

	ts = (char *)s;
	nb_words = 0;
	while (*ts)
	{
		length = find_word(ts, de);
		if (length > 0)
		{
			++nb_words;
			ts += length;
		}
		else
			++ts;
	}
	return (nb_words);
}

static int		cp_word(char **arr, char const *s, size_t length)
{
		char		*sub;
		size_t	index;

		sub = (char *)malloc((length + 1) * sizeof(char));
		if (sub == 0)
			return (0);
		index = 0;
		while (index < length)
		{
			sub[index] = s[index];
			++index;
		}
		sub[index] = '\0';
		*arr = sub;
		return (1);
}

static char		**free_error(char ***t, size_t index)
{
		size_t length;
		char		**arr;

		arr = *t;
		length = 0;
		while (index > 0)
		{
			free(arr[index]);
			arr[index] = 0;
			--index;
		}
		free(arr[index]);
		arr[index] = 0;
		free(arr);
		arr = 0;
		return (0);
}

char					**ft_strsplit(char const *s, char c)
{
	size_t	nb_words;
	size_t	index;
	size_t	length;
	char		*tmp;
	char		**arr;

	nb_words = word_count(s, c);
	arr = (char **)malloc(nb_words * sizeof(char *));
	if (arr == 0 || nb_words == 0)
		return (0);
	tmp = (char *)s;
	index = 0;
	while (index < nb_words)
	{
		length = find_word(tmp, c);
		tmp += length + 1;
		if (length == 0)
			continue ;
		if (cp_word(&arr[index], tmp - length - 1, length) == 0)
				return (free_error(&arr, index - 1));
		++index;
	}
	return (arr);
}
