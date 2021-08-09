#include <stdio.h>
#include <string.h>
#include "../libft.h"
int main(void)
{
	char escape[10] = {"     "};
	char *src;
	//unsigned char c = -304;
	
	escape[0] = '\0';
	src = memchr(escape, 48, 16);
	printf("%c", *src);
	//escape[3] = 2;
	/*src = ft_memchr(escape);
	printf("%d\n", src);*/
	/*
	src = memchr("aoeu", 304, 100);
	printf("%s\n", src);
	*/
}
