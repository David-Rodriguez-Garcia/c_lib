#include <stdio.h>
#include <string.h>
//#include "../libft.a"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int main(void)
{
    char ar[40] = {"ESTO-ponme may- &1{/+ -AOUuoaoeu"};
    char ar2[40] = {"AOU\0u"};
    char *p;

    p = ft_strnstr(ar, ar2, 25);
    printf("%s", p);
    p = strnstr(ar, ar2, 25);
    printf("\n%s", p);
}
