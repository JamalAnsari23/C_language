#include<stdio.h>
union students
{
	int id;
	char name[15];
}jam;
void main()
{
	jam.id=454;
	printf("The id of student is %d\n",jam.id);
	gets(jam.name);
	printf("and the name is %s\n",jam.name);
}
