#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool leap;
	int year;
	printf("\nPlease enter a year:");
	scanf("%d",&year);
	if(year%4==0 && year%100 != 0 || year % 400 == 0)
	{
	leap = true;
	printf("Year %d is leap yea\nr", year);
	}
	else{
	leap = false;
	printf("Year %d is not leap year\n", year);
	}
	return 0;
} 
	
