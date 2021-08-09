#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len);
int main(void)
{
    /*char a[100] = {"Hola, esta frase tiene que ser pasada"};
    char b[100] = {"A veces me gustan las mariposas. Aunque otras no."};
    printf("%s", memmove(b, b+6, 5));*/
    int a[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 31, 42};
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *p;
    int c = 0;
    p = memmove(a, a + 2, 36);

    while (c++ < 12)
    {
        printf("%d ", *p);
        p++;
    }
}


/*//#include "../libft.a"
#include <stdio.h>

int main(void)
{*/
    /*char a[100] = {"Hola, esta frase tiene que ser pasada"};
    char b[100] = {"A veces me gustan las mariposas. Aunque otras no."};
    printf("%s", memmove(b, b+6, 5));*/
    /*int a[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 31, 42};
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *p;
    int c = 0;

    p = ft_memmove(a, a + 2, 36);
    while (c++ < 12)
    {
        printf("%d ", *p);
        p++;
    }
}*/