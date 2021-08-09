/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:09:32 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 16:19:44 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	c;
	char			*p1;
	const char		*p2;

	if (dst == 0 || src == 0)
		return (dst);
	p1 = dst;
	p2 = src;
	c = 0;
	while (c++ < n)
	{
		*p1 = (char) *p2;
		p1++;
		p2++;
	}
	return (dst);
}
