/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:10:00 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/03 20:12:39 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	car;

	i = 0;
	car = (char) s[i];
	while (car != '\0')
	{
		if (car == (char)c)
			return ((char *) &s[i]);
		i++;
		car = (char) s[i];
	}
	if ((char)c == '\0')
		return ((char *) &s[i]);
	return (0);
}
