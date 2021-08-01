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
	while (finder(set, s1[l - c]))
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
	p = malloc(e_i - s_i + 1);
	l = 0;
	while (s_i + l <= e_i)
	{
		p[l] = s1[s_i + l];
		l++;
	}
	p[l] = '\0';
	return (p);
}
