#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p1;
	const char	*p2;
	size_t		c;

	p1 = dst;
	p2 = src;
	if (dst >= src && dst <= src + len)
		while (len-- != 0)
			p1[len] = p2[len];
	else
	{
		c = 0;
		while (c++ < len)
			p1[c - 1] = p2[c - 1];
	}
	return (dst);
}
