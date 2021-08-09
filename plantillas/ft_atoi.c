#include <stdlib.h>
#include <stdio.h>
//#include "../libft.a"

int	ft_atoi(const char *str);

int main(void)
{
    char ar[100] = {"                       -100000000"};
    int num;

    num = atoi(ar);
    printf("%d", num);
    num = ft_atoi(ar);
    printf("\n%d", num);
}