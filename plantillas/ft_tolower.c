#include <stdio.h>
//#include "../libft.a"
int	ft_tolower(int c);
int main(void)
{
    char ar[40] = {"ESTO-ponme may- &1{/+ -AOEUuoaoeuUAOU"};
    int i = 0;

    while (ar[i] != '\0')
    {
        ar[i] = ft_tolower(ar[i]);
        i++;
    }
    printf("%s", ar);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ar[40] = {"ESTO-ponme may- &1{/+ -AOEUuoaoeuUAOU"};
    int i = 0;

    while (ar[i] != '\0')
    { 
        ar[i] = tolower(ar[i]);
        i++;
    }
    printf("%s", ar);
}*/
