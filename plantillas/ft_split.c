#include <stdio.h>
//#include "../libft.a"
char	**ft_split(char const *s, char c);
int main(void)
{
    char ar[100] = {"              Esta es una frase a dividir por espacios         "};
    char **p;
    int c;

    p = ft_split(ar, '\0');
    c = 0;
    while (*p != '\0')
    {
        printf("%s\n", *p);
        free(*p);
        p++;
        c++;
    }
    free(p - c);
}