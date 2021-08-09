/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:10:41 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 21:09:42 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	finder(char const *set, const char car)
{
	int	c;

	c = 0;
	while (set[c] != '\0')
	{
		if (set[c] == car)
			return (-1);
		c++;
	}
	return (0);
}

static int	s_index(char const *s1, char const *set)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && finder(set, s1[c]) == -1)
		c++;
	return (c);
}

static int	f_index(char const *s1, char const *set)
{
	int	l;
	int	c;

	l = 0;
	while (s1[l] != '\0')
		l++;
	c = 1;
	while (finder(set, s1[l - c]) == -1 && l - c >= 0)
		c++;
	return (l - c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		s_i;
	int		e_i;
	int		l;

	s_i = s_index(s1, set);
	e_i = f_index(s1, set);
	if (e_i - s_i < 0)
	{
		p = malloc(1);
		p[0] = '\0';
		return (p);
	}
	p = malloc(e_i - s_i + 2);
	if (!p)
		return (0);
	l = 0;
	while (s_i + l <= e_i && e_i != 0)
	{
		p[l] = s1[s_i + l];
		l++;
	}
	p[l] = '\0';
	return (p);
}
