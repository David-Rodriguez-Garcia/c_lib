#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);
int main(void)
{
    char ar[100] = {"Esta es una frase a buscar 21"};
    char *p;

    p = memchr(ar, '\0', -33);
    printf("%lu", (unsigned long) p);
    p = ft_memchr(ar, '\0', -33);
    printf("\n%lu", (unsigned long) p);
}