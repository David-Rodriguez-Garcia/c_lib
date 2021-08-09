/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:10:16 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 21:08:25 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	ldst;
	int	lsrc;
	int	c;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if ((int) dstsize < 0)
		dstsize = (size_t)(lsrc + ldst + (int) dstsize + 2);
	if ((int) dstsize < ldst)
		return (lsrc + dstsize);
	if (src <= 0 || dst <= 0 || dstsize == 0)
		return ((size_t)(ldst + lsrc));
	c = 0;
	while (c < (int) dstsize - ldst - 1 && src[c] != '\0')
	{
		dst[ldst + c] = src[c];
		c++;
	}
	if (ldst < (int)dstsize)
		dst[ldst + c] = '\0';
	return ((size_t)(ldst + lsrc));
}
