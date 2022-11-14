#include<stdio.h>
void printstr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}
void main()
{
//	char str[6]="jamal";
//	char str[] = {'j','a','m','a','l','\0'};
    char str[32];
    gets(str);
    printf("using custom function printstr\n");
	printstr(str);
    printf("using printf %s\n",str);
    printf("using puts: \n");
    puts(str);

}
