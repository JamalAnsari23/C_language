#include<stdio.h>

int main(){
	char charval;
	unsigned char ucharval;
	unsigned long int ulint;
	
	printf("Enter a Character:\n");
//	scanf("%c",&charval);
//	printf("your character is  %c",charval);
    charval = getchar();
    getchar();
    printf("your character is %c\n",charval);
    
    printf("Enter unsignedchar\n");
    ucharval = getchar();
    getchar();
    printf("Your unsignedchar is %c\n",ucharval);
    printf("Enter yout unsigned long int \n");
    scanf("%d",&ulint);
    printf("Your unsigned long int is : %d",ulint);
    
	return 0;
}
