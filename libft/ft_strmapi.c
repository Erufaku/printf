#include "libft.h"
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*res;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = -1;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	while (++i < len)
		res[i] = f(i, s[i]);
	res[i] = '\0';
	return (res);
}