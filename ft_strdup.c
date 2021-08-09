/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:10:05 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 20:28:26 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		c;

	c = 0;
	while (s1[c] != '\0')
		c++;
	s2 = malloc(c + 1);
	if (!s2)
		return (0);
	c = 0;
	while (s1[c] != '\0')
	{
		s2[c] = (char) s1[c];
		c++;
	}
	s2[c] = '\0';
	return (s2);
}