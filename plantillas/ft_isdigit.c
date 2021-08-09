//#include "../libft.a"
#include <stdio.h>

int	ft_isdigit(int c);
int main(void)
{
	int i;

	i = 0;
	while(i++ < 255)
		printf("%d - %d\n\n",i,  ft_isdigit(i));
	return(0);
}
