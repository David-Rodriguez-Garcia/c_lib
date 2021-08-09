//#include "ft_isalpha.c"
#include <stdio.h>

int	ft_isalpha(int c);
int main(void)
{
	int i;

	i = 0;
	while(i++ < 255)
		printf("%d - %d\n\n",i,  ft_isalpha(i));
	return(0);
}
