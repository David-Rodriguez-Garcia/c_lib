static int	elev(int num, int times)
{
	while (times--)
		num *= 10;
	return (num);
}

static void	size(const char *str, int *i, int *n, int *c)
{
	*i = 0;
	*n = 0;
	*c = 0;
	while (str[*i] == ' ')
		(*i)++;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			(*n)++;
		(*i)++;
	}
	while (str[*i + *c] >= '0' && str[*i + *c] <= '9')
		(*c)++;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	len;
	int	c;
	int	num;

	size(str, &i, &n, &len);
	if (len == 0)
		return (0);
	c = 0;
	num = 0;
	while (c < len)
	{
		if (n == 1)
			num += elev(-((str[i + c]) - 48), len - c - 1);
		else
			num += elev(str[i + c] - 48, len - c - 1);
		c++;
	}
	return (num);
}
