#include<stdio.h>
struct students

{
	int id;
	char name[20];
}
stud;
void main()
{
	stud.id = 215;
	printf("The id of student is %d\n", stud.id);
	gets(stud.name);
	printf("And the name of student is %s\n",stud.name);
}
