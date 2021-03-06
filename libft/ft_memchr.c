#include "libft.h"
void*	ft_memchr(const void *s, int c, size_t n)
{
    unsigned char	*a;

    a = (unsigned char *)s;
    while (n--)
        if (*a != (unsigned char)c)
            a++;
        else
            return (a);
    return (NULL);
}
