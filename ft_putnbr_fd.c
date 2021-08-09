/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:09:49 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 21:07:44 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getint(int n, int *t, int *z)
{
	*z = 0;
	*t = 0;
	while (n > 9 || n < -9)
	{
		if (n % 10 == 0)
			(*z)++;
		else
			(*z) = 0;
		n /= 10;
		(*t)++;
	}
	if (n < 0)
		n *= -1;
	if (n == 0)
		(*z)++;
	return (n);
}

static int	elev(int num, int times)
{
	while (times-- != 0)
		num *= 10;
	return (num);
}

static void	iteri(char *p, int *c, int n)
{
	int		t;
	int		z;

	while (n != 0)
	{
		p[*c] = getint(n, &t, &z) + 48;
		if (n < 0)
			n += elev(p[*c] - 48, t);
		else
			n -= elev(p[*c] - 48, t);
		(*c)++;
		while (z-- != 0)
		{
			p[*c] = '0';
			(*c)++;
		}
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	p[12];
	int		c;

	c = 0;
	if (n == 0)
		p[c] = '0';
	if (n < 0)
		p[c] = '-';
	if (n == 0 || n < 0)
		c++;
	iteri(p, &c, n);
	p[c] = '\0';
	write(fd, p, c);
}
