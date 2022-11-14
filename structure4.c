#include<stdio.h>
#include<string.h>
struct students
{
	int id;
	char name[10];
}stud;
void main()
{
	printf("Enter the id\n", stud.id );
	scanf("%d",&stud.id);
printf("Enter the Name\n");
gets(stud.name);
printf("Your enter Name\n");
puts(stud.name);
}
