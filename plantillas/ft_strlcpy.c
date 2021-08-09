#include <stdio.h>
//#include "../libft.a"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int main(void)
{
    char ar1[100] = {""};
    char ar2[100] = {"Copiamela aqui"};

    printf("Num: %ld\n%s", ft_strlcpy(ar2, ar1, 0), ar2);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char ar1[100] = {""};
    char ar2[100] = {"Copiamela aqui"};

    printf("Num: %ld\n%s", strlcpy(ar2, ar1, 0), ar2);
}*/