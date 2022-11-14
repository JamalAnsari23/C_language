#include<stdio.h>  
#include <string.h>    
int main(){    
 char ch[20];
 printf("Enter a string\n");
 gets(ch);
 printf("your 1st string is %s\n",ch); 
   char ch2[20];    
   strcpy(ch2,ch);    
   printf("Value of second string is: %s",ch2);    
 return 0;    
} 
