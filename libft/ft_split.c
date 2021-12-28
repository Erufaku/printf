#include "libft.h"
int   ft_words_count(const char *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}
int		ft_wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int 	j;
	int 	n;

	i = -1;
	if (!s)
		return ((void *)0);
	n = ft_words_count(s, c);
	arr = (char **)malloc((n + 1) * sizeof(char *));
	if (!arr)
		return ((void *)0);
	while (++i < n) {
		arr[i] = (char *)malloc(ft_wordlen(s, c) + 1);
		if (!arr[i])
			return ((void *)0);
		j = 0;
		while (*s == c)
			s++;
		while (*s && *s != c)
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}