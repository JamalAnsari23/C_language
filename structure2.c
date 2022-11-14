#include<stdio.h>
void main()
{
	char names[2][10],dummy;
	int roll_numbers[2],i;
	float marks[2];
	for(i=0;i<3;i++)
	{
		printf("Enter the names,roll_numbers,marks of student is %d",i+1);
		scanf("%s %d %f",&names,&roll_numbers,&marks);
		scanf("%c",&dummy);
	}
	
		printf("Printing the students details...\n");
		for(i=0;i<3;i++)
		{
			printf("%s %d %f\n", names[i],roll_numbers[i],marks[i]);
		}	
}
