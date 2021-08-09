/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:10:12 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 21:08:10 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	arlen(char const *s1, char const *s2, size_t *l1, size_t *l2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0')
		c++;
	*l1 = c;
	c = 0;
	while (s2[c] != '\0')
		c++;
	*l2 = c;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	c;
	size_t	c2;
	char	*p;

	arlen(s1, s2, &l1, &l2);
	p = malloc(l1 + l2 + 1);
	if (!p)
		return (0);
	if (l1 + l2 == 0)
	{
		p[0] = '\0';
		return (p);
	}
	c = 0;
	while (c++ < l1)
		p[c - 1] = s1[c - 1];
	c -= 1;
	c2 = 0;
	while (c2++ < l2)
		p[c + c2 - 1] = s2[c2 - 1];
	c2 -= 1;
	p[c + c2] = '\0';
	return (p);
}
