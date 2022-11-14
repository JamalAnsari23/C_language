#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("Vowel");
	}
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
