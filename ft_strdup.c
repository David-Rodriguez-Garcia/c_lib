#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		c;

	c = 0;
	while (s1[c] != '\0')
		c++;
	s2 = malloc(c + 1);
	c = 0;
	while (s1[c] != '\0')
	{
		s2[c] = (char) s1[c];
		c++;
	}
	s2[c] = '\0';
	return (s2);
}
