#include<stdio.h>
struct students{
	char name[20];
	int rollno;
	int age;
};
void main()
{
	struct students s1, s2, s3, s4, s5;
	printf("enter name, roll no and age of student 1: ");
	scanf("%s %d %d",s1.name,&s1.rollno,&s1.age);
		printf("enter name, roll no and age of student 2: ");
	scanf("%s %d %d",s2.name,&s2.rollno,&s2.age);
		printf("enter name, roll no and age of student 3: ");
	scanf("%s %d %d",s3.name,&s3.rollno,&s3.age);
		printf("enter name, roll no and age of student 4: ");
	scanf("%s %d %d",s4.name,&s4.rollno,&s4.age);
		printf("enter name, roll no and age of student 5: ");
	scanf("%s %d %d",s5.name,&s5.rollno,&s5.age);
	
	printf("the details of all the five students are: \n");
	printf("%s %d %d \n",s1.name,s1.rollno,s1.age);
		printf("%s %d %d \n",s2.name,s2.rollno,s2.age);
			printf("%s %d %d \n",s3.name,s3.rollno,s3.age);
			  printf("%s %d %d \n",s4.name,s4.rollno,s4.age);
			  	printf("%s %d %d \n",s5.name,s5.rollno,s5.age);
}
	
