#include <stdio.h>
void main()
{
	int i,n;
	printf("print all even numbers till\n");
	scanf("%d",&n);
	
	printf("All even numbers from 1 to %d\n",n);
	
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++; 
	}
	
}
