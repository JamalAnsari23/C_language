#include <stdio.h>
void main()
{
	int i,n;
	printf("print all even number from 1 to 100\n");
	scanf("%d",&n);
	
	printf("print all even number between 1 to 100\n",n);
	
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
