/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:10:46 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 21:09:04 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*substr_helper(char *str)
{
	str = malloc(1);
	if (str == 0)
		return (0);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	c;
	char			*str;

	c = 0;
	str = 0;
	while (s[c] != '\0')
		c++;
	if (c < start + 1)
		return (substr_helper(str));
	if (len < c - start + 1)
		str = malloc(len + 1);
	else
		str = malloc(c - start + 2);
	if (str == 0)
		return (0);
	c = 0;
	while (s[c + start] != '\0' && c < len)
	{
		str[c] = s[c + start];
		c++;
	}
	str[c] = '\0';
	return (str);
}
