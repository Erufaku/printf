#include "libft.h"
char*	ft_strrchr(const char *s, int c)
{
    char	*a;
    int     i;

    i = 0;
    a = (char *)s;
    while (*a != '\0')
    {
        a++;
        i++;
    }
    while (*a != (char)c && i > 0)
    {
        a--;
        i--;
    }
    if (*a == (char)c)
        return (a);
    else
        return (NULL);
}
