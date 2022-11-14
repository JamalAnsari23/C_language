#include<stdio.h>
void main()
{
    char age[5];
    char name[5][5];
	int i=0;
	/*for(i=0;i<5;i++)
	{
		scanf("%d",&age[i]);
	}*/
	for(i=0;i<5;i++)
	{
		scanf("%s",&name[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n %s",name[i]);
	}
	
}
