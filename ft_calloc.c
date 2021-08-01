#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*f_one;
	unsigned char	*p;
	int				c;

	if (count == 0)
		return (0);
	f_one = malloc(size * count);
	p = (unsigned char *) f_one;
	c = size * count;
	while (c--)
	{	
		*p = 0;
		p++;
	}
	return (f_one);
}
