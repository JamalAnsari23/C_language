#include <stdio.h>
void main()
{
	int i,end;
	printf("Enter natural number from 1 to n \n");
	scanf("%d",&end);
	i=1;
	while(i<=end)
	{
		printf("%d\n",i);
		i++;
	}
}
