#include<stdio.h>
void main()
{
	int i=0;
	int j=0;
	int marks[2][4]={{12,14,16,18},
	                 {20,22,24,26}};
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
		
	//	printf("The value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
	printf("%d ",marks[i][j]);
	}
	printf("\n");
}
}
