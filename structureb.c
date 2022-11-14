#include<stdio.h>
struct emloyee
{
	int id;
	float marks;
}
emp;
void main()
{
	emp.id=1456;
	printf("The employee id is %d\n",emp.id);
	
    scanf("%f",emp.marks);
    printf("and the employee marks is %f\n",emp.marks);
    
	
}
//#include<stdio.h>
//struct students
//{
//	int id;
//	char name[50];
//}
//stud;
//void main()
//{
//	stud.id=1001;
//	printf(" The student id is %d\n", stud.id );
//	gets(stud.name);
//	printf("And the student name is %s\n",stud.name);
//}
