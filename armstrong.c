#include <stdio.h>
void main()
{
	int n,r,sum,res;
	printf("Enter a number\n");
	scanf("%d",&n);
	res=n;
	
	while(n>0)
	{
		r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
    } 
	if(res==sum)
	{
		printf("armstrong");
    } 
	else
	{
		printf("not armstrong");
		 }     
}

