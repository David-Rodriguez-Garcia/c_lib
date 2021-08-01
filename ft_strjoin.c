#include "libft.h"

static int	arLen(char const *s1)
{
	int	c;

	c = 0;
	while (s1[c] != '\0')
		c++;
	return (c);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	c;
	size_t	c2;
	char	*p;

	l1 = arLen(s1);
	l2 = arLen(s2);
	p = malloc(l1 + l2 + 1);
	if (p == 0)
		return (0);
	c = 0;
	while (c++ < l1)
		p[c - 1] = s1[c - 1];
	c -= 1;
	c2 = 0;
	while (c2++ < l2)
		p[c + c2 - 1] = s2[c2 - 1];
	p[c + c2] = '\0';
	return (p);
}
