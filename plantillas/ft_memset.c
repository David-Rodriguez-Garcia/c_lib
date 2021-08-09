//#include "../libft.a"
#include <stdio.h>

void	*ft_memset(void *b, int c, unsigned long len);
int main (void)
{
    char p[100];
    int i[100];
    int c = 0;

    ft_memset(i, -48, 50);
    while (c++ < 5)
        printf("%d\n", i[c]);
    //printf("%s", p);
    return(0);
}