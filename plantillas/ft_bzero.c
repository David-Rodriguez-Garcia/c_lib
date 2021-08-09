//#include "../libft.a"
/*#include <stdio.h>
void	ft_bzero(void *s, size_t n);

int main(void)
{
    char i[3] = {"ao\0"};
    unsigned long x = 5;
    int c = 0;
    while (c++ < 100)
        printf("%d - %d\t", c - 1 , i[c - 1]);
    c = 0;
    ft_bzero(i, x);
    printf("\n\n");
    while (c++ < 100)
        printf("%d - %d\t", c - 1 , i[c - 1]);
}*/


#include <strings.h>
#include <stdio.h>
int main(void)
{
    char i[3] = {"ao\0"};
    unsigned long x = 5;
    int c = 0;
    while (c++ < 100)
        printf("%d - %d\t", c - 1 , i[c - 1]);
    c = 0;
    bzero(i, x);
    printf("\n\n");
    while (c++ < 100)
        printf("%d - %d\t", c - 1 , i[c - 1]);
}