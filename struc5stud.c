#include <stdio.h>
#include <string.h>
struct student
{
	int rollno;
	char name[15];
}
st;
void main()
{
	int i;
	struct student st[5];
	printf("Enter record of 5 students");
	for(i=0;i<5;i++)
	{
		printf("\n Enter roll no of students");
		scanf("%d",&st[i].rollno);
		printf("\n Enter name of Students");
		scanf("%s",st[i].name);
	}
    printf("\n Information list of students:");    
    for(i=0;i<5;i++)
   {    
    printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);    
   }
  } 
