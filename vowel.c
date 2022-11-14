#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a alphabet\n");
	scanf("%ch", &ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
