//Question no.3
#include<stdio.h>
void main()
{
	int amt;
	float netprice;
	printf("enter the amount of the product:");
	scanf("%d",&amt);
	float discount;
	if(amt<100)
	{
		discount=amt*0.10;
		printf("The netprice is %f",netprice);
		netprice=&amt-&discount;
		
	}
    if(amt>=100)
	{
		discount=amt*0.12;
	}
	if(amt>=200)
	{
		discount=amt*0.13;
	}
	printf("the discount will be %f",discount);	
}
