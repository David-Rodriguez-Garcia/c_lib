#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

static t_list	*ft_lstlast_(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*x;

	x = ft_lstlast_(*lst);
	x->next = new;
}
