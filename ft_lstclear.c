#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save;

	while (*lst)
	{
		(*del)((*lst)->content);
		save = (*lst)->next;
		free(*lst);
		*lst = save;
	}
	*lst = 0;
}
