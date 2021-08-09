#include <stdio.h>
//#include "../libft.a"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int main(void)
{
    char ar1[100] = {"Aoeu"};
    char ar2[100] = {"Copiamela aqui"};

    printf("Num: %ld\n%s", ft_strlcat(ar2, ar1, 25), ar2);
}


/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char ar1[100] = {"Aoeu"};
    char ar2[100] = {"Copiamela aqui"};

    printf("Num: %ld\n%s", strlcat(ar2, ar1, 25), ar2);
}*/
