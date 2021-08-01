#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	c;
	char	*str;

	str = s;
	if ((int) n >= 0)
	{
		c = 0;
		while (c++ < n)
			str[c - 1] = 0;
	}
}
