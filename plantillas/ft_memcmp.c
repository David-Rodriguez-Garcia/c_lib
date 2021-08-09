#include <stdio.h>
#include <string.h>
//#include "../libft.a"

int	ft_memcmp(const void *s1, const void *s2, size_t n);
int main(void)
{
    char ar[40] = {"ESTO-ponme may- &1{/+ -AOUuoaoeu"};
    char ar2[40] = {"ESTO-ponme may- &1{/+ -1AOUuoaoeuU"};
    int p;

    p = ft_memcmp(ar, ar2, 24);
    printf("%d", p);
    p = memcmp(ar, ar2, 24);
    printf("\n%d", p);
}