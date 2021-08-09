#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include "../libft.a"
char	*ft_strdup(const char *s1);
int main(void)
{
    char ar[100] = {""};
    char *p;

    p = ft_strdup(ar);
    printf("%s", p);
    free(p);
    p = strdup(ar);
    printf("\n%s", p);
    free(p);
}