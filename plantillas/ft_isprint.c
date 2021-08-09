//#include "../libft.a"
#include <stdio.h>

int	ft_isprint(int c);
int main(void)
{
	int i;

	i = 0;
	while(i++ < 255)
		printf("%d - %d\n\n",i,  ft_isprint(i));
	return(0);
}