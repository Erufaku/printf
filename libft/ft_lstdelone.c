#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	lst->next = NULL;
	free(lst->content);
	del(lst);
}