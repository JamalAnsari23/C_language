#include<stdio.h>
struct students
{
	int id;
	char name[50];
}
stud;
void main()
{
	stud.id=1001;
	printf(" The student id is %d\n", stud.id );
	gets(stud.name);
	printf("And the student name is %s\n",stud.name);
}
