#include <stdio.h>
//#include "../libft.a"
char	*ft_strchr(const char *s, int c);
int main(void)
{
    char ar[40] = {"ESTO-ponme may- &1{/+ -AOEUuoaoeuUAOU"};
    char *p;

    p = ft_strchr(ar, '\0');
    printf("%ld", (unsigned long) p);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char ar[40] = {"ESTO-ponme may- &1{/+ -AOEUuoaoeuUAOU"};
    char *p;

    p = strchr(ar, '&');
    printf("%c", *p);
}*/
