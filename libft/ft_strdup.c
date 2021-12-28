#include "libft.h"
char*	ft_strdup(const char *s1)
{
    char	*p;

    p = (char *)malloc(ft_strlen((s1)) + 1);
    if (!p)
        return (NULL);
    ft_strlcpy(p, s1, ft_strlen(s1) + 1);
    return (p);
}
