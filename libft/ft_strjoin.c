#include "libft.h"
char 	*ft_strjoin(char const *s1, char const *s2)
{
    char	*p;
    int 	i;

    i = ft_strlen(s1) + ft_strlen(s2);
    if (!s1 && !s2)
        return (NULL);
    p = (char *)malloc(i + 1);
    if (!p)
        return (NULL);
    ft_strlcpy(p, s1, ft_strlen(s1) + 1);
    ft_strlcat(p, s2, i + 1);
    return (p);
}
