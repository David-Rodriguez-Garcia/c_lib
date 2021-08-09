#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);
int main(void)
{
    char *p;

    p = ft_itoa(-2147483648);
    printf("%s", p);
    free(p);
}
