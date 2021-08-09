/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:08:58 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 19:18:36 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*x;
	t_list	*cpy;

	if (lst > 0 && new > 0)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			cpy = *lst;
			x = ft_lstlast(cpy);
			x->next = new;
		}
	}
}
