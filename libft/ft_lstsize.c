#include "libft.h"
int ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst) {
		lst = lst->next;
		i++;
	}
	return (i);
}