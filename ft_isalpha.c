int	ft_isalpha(int c)
{
	if (c < 0)
		return (0);
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}