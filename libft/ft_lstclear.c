#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*d;
	t_list	*enter;

	enter = (*lst);
	while (enter) {
		d = enter->next;
		if (del)
			del(enter->content);
		free(enter);
		enter = d;
	}
	*lst = NULL;
}