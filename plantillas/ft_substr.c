//#include "../libft.a"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
int main(void)
{
    char ar[100] = {"Esta array va a tener substr"};
    char *p;

    p = ft_substr(ar, 7, 10);
    printf("%s", p);
    free(p);
}