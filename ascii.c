#include <stdio.h>
int main()
{
	int i,sum;
	char c;
	printf("\nPlease enter a word:");
	for(sum=0;(c=getchar())!='\n';sum+=c);
		printf("output is %d",sum);
	return 0;
}
