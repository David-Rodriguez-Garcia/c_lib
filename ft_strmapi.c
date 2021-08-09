/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:10:26 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 19:02:39 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	p = malloc(l + 1);
	if (p == 0)
		return (0);
	l = 0;
	while (s[l] != '\0')
	{
		p[l] = (*f)(l, s[l]);
		l++;
	}
	p[l] = '\0';
	return (p);
}
