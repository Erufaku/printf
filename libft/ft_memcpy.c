#include "libft.h"
void*	ft_memcpy(void *dst, const void *src, size_t n)
{
    char		*d;
    const char	*s;

    d = dst;
    s = src;
    if ((dst == (void *)0) && (src == (void *)0))
        return (dst);
    while (n > 0)
    {
        *d++ = *s++;
        n--;
    }
    return (dst);
}
