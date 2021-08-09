/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:07:28 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/03 20:10:33 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ii;

	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	i = 0;
	if ((int) len < 0)
		len = (((int)ft_strlen(haystack)) + (int)len + 1);
	while (i < len && haystack[i] != '\0')
	{
		ii = 0;
		while ((i + ii) < len && haystack[i + ii] == needle[ii])
		{
			if (needle[ii + 1] == '\0')
			{
				return (((char *) haystack) + i);
			}
			else if (haystack[i + ii] == '\0')
				return (0);
			ii++;
		}
		i++;
	}
	return (0);
}
