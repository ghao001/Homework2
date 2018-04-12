//Programming challenge #4
//Restaurant Bill
#include<stdio.h>
int main()
{
	double bill = 88.67;
	const double taxRate=.0675;
	double tipRate=.2;
	double tax=bill*taxRate;
	double tip=(bill+tax)*tipRate;
	double totalBill=bill+tax+tip;
	printf("Meal Cost:$%.2f\nTax:$%.2f\nTip:$%.2f\nTotal Bill:$%.2f\n",
			bill,tax,tip,totalBill);
	return 0;
}
