#include <stdio.h>
#include <stdlib.h>
//#include "../libft.a"

char	*ft_strjoin(char const *s1, char const *s2);
int main(void)
{
    char ar[100] = {"Este es el prefijo "};
    char ar2[100] = {"y este es el sufijo"};
    char *p;

    p = ft_strjoin(ar, ar2);
    printf("%s", p);
    free(p);
}