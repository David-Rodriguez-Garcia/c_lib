#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	c2;

	if (dstsize == 0)
		return (dstsize);
	c = 0;
	while (dst[c] != '\0' && c < dstsize)
		c++;
	c2 = 0;
	if (c + 1 < dstsize)
	{
		while (c + c2 + 1 < dstsize)
		{
			dst[c + c2] = src[c2];
			c2++;
		}
		dst[c + c2] = '\0';
	}
	return (c + c2);
}
