#include "libft.h"
char*	ft_strchr(const char *s, int c)
{
    char	*a;
    int		i;

    i = 0;
    a = (char *)s;
    while (a[i] != (char)c && a[i] != '\0')
        i++;
    if (a[i] == (char)c)
        return (a + i);
    else
        return (NULL);
}
