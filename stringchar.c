#include<stdio.h>
void main()
{	
char ch[11]="javapoint";
int i=0;
int count=0;
while(i<11)
{
    if(ch[i]=='a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'u' || ch[i] == 'o')  
        {  
            count ++;  
        }  
        i++; 
}
printf("The number of vowel is %d",count);
//printf("%c",ch[2]);
//scanf("%c",&ch);
}
