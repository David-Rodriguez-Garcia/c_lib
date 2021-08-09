#include <stdio.h>
#include <string.h>
//#include "../libft.a"

char	*ft_strrchr(const char *s, int c);
int main(void)
{
    char ar[40] = {"ESTO-ponme may- &1{/+ -AOUuoaoeuUAOU"};
    char *p;

    p = ft_strrchr(ar, 'E');
    printf("%ld", (unsigned long) p);
    p = strrchr(ar, 'E');
    printf("\n%ld", (unsigned long) p);
}