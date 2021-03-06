/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:09:46 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/03 20:09:46 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	write(fd, s, l);
	write(fd, "\n", 1);
}
