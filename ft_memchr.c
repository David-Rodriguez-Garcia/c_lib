#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] != '\0' && i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return (&((void *)s)[i]);
		i++;
	}
	if (((unsigned char *)s)[i] == c && i != n)
		return (&((void *)s)[i]);
	return (0);
}
