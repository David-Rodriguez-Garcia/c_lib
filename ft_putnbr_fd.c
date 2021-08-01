#include "libft.h"

static int	getInt(int n, int *t)
{
	*t = 0;
	while (n > 9 || n < -9)
	{
		(*t)++;
		n /= 10;
	}
	if (n < 0)
		n *= -1;
	return (n);
}

static int	elev(int num, int times)
{
	while (times-- != 0)
		num *= 10;
	return (num);
}

static int	len(int n)
{
	int	c;

	c = 0;
	if (n < 0)
		c++;
	while (n > 9 || n < -9)
	{
		n /= 10;
		c++;
	}
	return (c + 1);
}

static char	*ft_itoa_(int n)
{
	char	*p;
	int		c;
	int		t;

	p = malloc(len(n) + 1);
	c = 0;
	if (n == 0)
		p[c] = 48;
	if (n < 0)
	{
		p[c] = '-';
		c++;
	}
	while (n != 0)
	{
		p[c] = getInt(n, &t) + 48;
		if (n < 0)
			n += elev(p[c] - 48, t);
		else
			n -= elev(p[c] - 48, t);
		c++;
	}
	p[c] = '\0';
	return (p);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*c;
	int		l;

	c = ft_itoa_(n);
	l = 0;
	while (c[l] != '\0')
		l++;
	write(fd, c, l);
}
