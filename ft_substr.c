#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	c;
	char			*str;

	c = 0;
	while (s[c] != '\0')
		c++;
	if (c < start + 1)
		return (0);
	str = malloc(c - start + 1);
	c = 0;
	while (s[c + start] != '\0' && c < len)
	{
		str[c] = s[c + start];
		c++;
	}
	str[c] = '\0';
	return (str);
}
