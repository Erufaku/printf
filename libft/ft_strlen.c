#include "libft.h"
size_t  ft_strlen(const char *c)
{
    int	i;

    i = 0;
	if (!c)
		return (0);
    while (c[i])
        i++;
    return (i);
}
