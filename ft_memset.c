/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:09:39 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/03 20:09:39 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned char	car;
	char			*str;
	unsigned long	i;

	car = c;
	i = 0;
	str = b;
	while (i++ < len)
		str[i - 1] = car;
	return (b);
}
