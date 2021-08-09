/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:08:34 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 20:27:46 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*f_one;
	unsigned char	*p;
	int				c;

	if (size == 0)
		size = 1;
	f_one = malloc(size * count);
	if (f_one == 0)
		return (0);
	p = (unsigned char *) f_one;
	c = size * count;
	while (c--)
	{	
		*p = 0;
		p++;
	}
	return (f_one);
}
