#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ii;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		ii = 0;
		if (haystack[i] == needle[ii])
		{
			while ((i + ii) < (len - 2))
			{
				if (needle[i + ii] == '\0')
					return (((char *) &haystack[i]));
				else if (haystack[i + ii] == '\0')
					return (0);
				ii++;
			}
		}
		i++;
	}
	return (0);
}
