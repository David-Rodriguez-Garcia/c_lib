#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;

	if ((int) dstsize > 0)
	{
		i = 0;
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		if (i > 0)
			dst[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
