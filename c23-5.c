/*
 * Program Challenge #23
 * Pattern Displays
 */
#include<stdio.h>
int main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<=i;j++)
			printf("+");
		printf("\n");
	}
	for(int i=0;i<10;i++)
	{
		for(int j=10;j>i;j--)
			printf("+");
		printf("\n");
	}
	return 0;
}


