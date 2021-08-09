/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:09:55 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/09 15:45:40 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skipper(char const *s, char c, int i)
{
	while (s[i] == c && c != '\0')
		i++;
	return (i);
}

static int	n_words(char const *s, char c)
{
	int	l;
	int	n;

	l = 0;
	l = skipper(s, c, l);
	n = 0;
	while (s[l] != '\0')
	{
		if ((char) s[l] != c)
		{
			n++;
			while ((char) s[l] != c && s[l] != '\0')
				l++;
		}
		else
			l = skipper(s, c, l);
	}
	return (n);
}

static int	word_len(char const *s, char c)
{
	int	l;

	l = 0;
	while (s[l] != c && s[l] != '\0')
		l++;
	return (l);
}

static void	split_helper(char **p, char const *s, char c, int *i)
{
	while (s[*i] != c && s[*i] != '\0')
	{
		**p = s[*i];
		(*i)++;
		(*p)++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		l;

	p = malloc((n_words(s, c) + 1) * 8);
	if (!p)
		return (0);
	i = 0;
	i = skipper(s, c, i);
	while (s[i] != '\0')
	{
		l = (word_len(s + i, c));
		*p = malloc(l + 1);
		if (!*p)
			return (0);
		split_helper(p, s, c, &i);
		**p = '\0';
		*p -= l;
		p++;
		i = skipper(s, c, i);
	}
	*p = 0;
	return (p - n_words(s, c));
}
