//#include "../libft.a"
#include <stdio.h>

int	ft_isascii(int c);
int main(void)
{
	int i;

	i = -5;
	while(i++ < 255)
		printf("%d - %d\n\n",i,  ft_isascii(i));
	return(0);
}
