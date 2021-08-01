#include "libft.h"
static int	tragarBasura(char const *s, char c, int i)
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
	l = tragarBasura(s, c, l);
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
			l = tragarBasura(s, c, l);
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

//pone que podemos usar free(), no sera que debemos liberar s?
char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		l;

	p = malloc((n_words(s, c) + 1) * 8);
	i = 0;
	i = tragarBasura(s, c, i);
	while (s[i] != '\0')
	{
		l = (word_len(s + i, c));
		*p = malloc(l + 1);
		while (s[i] != c && s[i] != '\0')
		{
			**p = s[i];
			i++;
			(*p)++;
		}
		**p = '\0';
		*p -= l;
		p++;
		i = tragarBasura(s, c, i);
	}
	*p = 0;
	return (p - n_words(s, c));
}
