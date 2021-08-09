#include <stdio.h>
#include <string.h>
//#include "../libft.a"

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int main(void)
{
    char ar[40] = {"ESTO-ponme may- &1{/+ -AOUuoaoeu"};
    char ar2[40] = {"ESTO-ponme may- &1{/+ -1AOUuoaoeuU"};
    int p;

    p = ft_strncmp(ar, ar2, -32);
    printf("%d", p);
    p = strncmp(ar, ar2, -32);
    printf("\n%d", p);
}