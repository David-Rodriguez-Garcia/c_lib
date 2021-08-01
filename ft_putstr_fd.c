#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	write(fd, s, l);
}
