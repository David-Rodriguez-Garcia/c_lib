/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:09:18 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 21:02:28 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_one;
	t_list	*n_list;
	t_list	*save;

	(void)(del);
	f_one = 0;
	while (lst)
	{
		n_list = malloc(sizeof(t_list));
		if (n_list == 0)
			return (0);
		n_list->content = (*f)(lst->content);
		if (f_one == 0)
			f_one = n_list;
		else
			save->next = n_list;
		lst = lst->next;
		save = n_list;
	}
	n_list->next = 0;
	return (f_one);
}
