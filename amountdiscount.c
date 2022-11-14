
#include<stdio.h>
void main()
{
	int amt;
	printf("enter the amount of the product:");
	scanf("%d",&amt);
	float discount;
	if(amt<100)
	{
		discount=amt*0.10;
	}
    else if(amt>=100)
	{
		discount=amt*0.12;
	}
	if(amt>=200)
	{
		discount=amt*0.13;
	}
	printf("the discount will be %f",discount);	
}
//Programming is a way to “instruct the computer to perform various tasks,Instruct the computer that means that you provide the computer a set of instructions that are written in a language that the computer can understand and work on it.
//Data types indicate the which type of data stored in a variable.
//The type of a variable determines how much space it occupies in storage.
//Basic Data Type:
//int
//char
//float
//char – char defines a character used to store a single character.
//Example: char ch = ‘a’;
//int – int is used to store integer numbers.
//Example: int num = 5;
//float – float is used to define floating-point numbers. 
//Example: float x = 2.0f;
