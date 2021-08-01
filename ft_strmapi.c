#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	p = malloc(l + 1);
	l = 0;
	while (s[l] != '\0')
	{
		p[l] = (*f)(l, s[l]);
		l++;
	}
	p[l] = '\0';
	return (p);
}
