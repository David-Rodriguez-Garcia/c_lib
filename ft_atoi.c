/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:08:03 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/07 21:39:29 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	elev(int num, int times)
{
	while (times--)
		num *= 10;
	return (num);
}

static void	size(const char *str, int *i, int *n, int *c)
{
	*i = 0;
	*n = 0;
	*c = 0;
	while (str[*i] == ' ' || str[*i] == '\n' || str[*i] == '\v'
		|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == '\t')
		(*i)++;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			(*n)++;
		(*i)++;
	}
	while (str[*i + *c] >= '0' && str[*i + *c] <= '9')
		(*c)++;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	len;
	int	c;
	int	num;

	size(str, &i, &n, &len);
	if (len == 0)
		return (0);
	c = 0;
	num = 0;
	while (c < len)
	{
		if (n == 1)
			num += elev(-((str[i + c]) - 48), len - c - 1);
		else
			num += elev(str[i + c] - 48, len - c - 1);
		c++;
	}
	return (num);
}
