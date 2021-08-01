#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*b;
	t_list	*save;
	t_list	*f_one;

	b = 0;
	while (lst)
	{
		a = malloc(sizeof(t_list));
		a = (*f)(lst->content);
		if (b != 0)
			b->next = a;
		else
			f_one = a;
		(*del)(lst->content);
		save = lst->next;
		free(lst);
		lst = save;
		b = a;
	}
	a->next = 0;
	return (f_one);
}
