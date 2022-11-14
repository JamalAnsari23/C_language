#include<stdio.h>
void main()
{
	int i,n;
	printf("print all odd numbers till \n");
	scanf("%d",&n);
	
	printf("All odd number from 1 to %d\n",n);
	
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
