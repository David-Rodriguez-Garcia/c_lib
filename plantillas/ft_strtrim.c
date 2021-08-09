//#include "../libft.a"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);
int main(void)
{
    char ar[100] = {"aoeoeoeoaaoeQuiero que me elimines estas letrasaaoeaoeaoe"};
    char set[100] = {"aoe"};
    char *p;

    p = ft_strtrim(ar, set);
    printf("%s", p);
    free(p);
}