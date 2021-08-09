#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
int main(void)
{
    char a[100] = {"Hola, esta frase tiene que ser pasada"};
    char b[99] = {"A veces me gustan las mariposas. Aunque otras no."};
    printf("%s", memcpy(b, b + 1, 10));
    /*int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *p;
    int c = 0;
    p = memcpy(b, a, 40);

    while (c++ < 10)
    {
        printf("%d ", *p);
        p++;
    }
    c = 0;
    while (*p != '\0')
        c++;
    printf("%d", c);*/
}
/*//#include "../libft.a"
#include <stdio.h>

int main(void)
{
    char a[100] = {"Hola, esta frase tiene que ser pasada"};
    char b[99] = {"A veces me gustan las mariposas. Aunque otras no."};

    printf("%s", ft_memcpy(b, a, 1000));
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *p;
    int c = 0;
    p = ft_memcpy(b, a, 40);

    while (c++ < 10)
    {
        printf("%d ", *p);
        p++;
    }
}*/