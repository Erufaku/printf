#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    if (n == 0)
        return (0);
    while (n - i != 0)
    {
        if ((s1[i] != s2[i]) || (s2[i] == '\0') || (s1[i] == '\0'))
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return (0);
}
