#include <stdio.h>
int main()
{
	char c1, c2, c3, c4, c5;
	printf("\nPlease put a word:");
	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
/*	putchar(c1+4);
	putchar(c2+4);
	putchar(c3+4);
	putchar(c4+4);
	putchar(c5+4);
	printf("\n");*/
	printf("\n%c%c%c%c%c\n",c1+4,c2+4,c3+4,c4+4,c5+4);
}
