#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	c;
	char			*p1;
	const char		*p2;

	p1 = dst;
	p2 = src;
	c = 0;
	while (c++ < n)
	{
		*p1 = (char) *p2;
		p1++;
		p2++;
	}
	return (dst);
}
