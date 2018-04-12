/*
 * Program Challenge #23
 * Stock Transaction Program
 */
#include<stdio.h>
int main()
{
	double payStock=1000*45.5;
	double gainStock=1000*56.9;
	printf("Joe paid $%.2f for the stock\n",payStock);
	printf("Commission for buying the stock: $%.2f\n",payStock*.02);
	printf("Joe sold the stock for:$%.2f\n",gainStock);
	printf("Commission for selling the stock: $%.2f\n",gainStock*.02);
	printf("Profile:$%.2f\n",gainStock*.98-payStock*1.02);
	return 0;
}


