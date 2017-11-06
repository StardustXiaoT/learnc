#include <stdio.h>
int main()
{
	int a, b,max;
	printf("\nPlease input first integer:");
	scanf("%d", &a);
	printf("\nPlease input second integer:");
	scanf("%d", &b);
	max = (a>b)?a:b;
//	a>b?printf("%d",a):printf("%d",b);
//	a>b?(max=1):(max=b);
	printf("Max is %d\n", max);
}
