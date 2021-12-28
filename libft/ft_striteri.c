#include "libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	if (s)
		while (++i < ft_strlen(s) && s[i])
			f(i, &s[i]);
}