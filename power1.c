#include <stdio.h>

int pow(int base,int expo);

int main()
{
 int base,power;
 int expo;
 
 printf("Enter base\n");
 scanf("%d", &base);
 printf("Enter expo\n");
 scanf("%d",&expo);
 
 power=pow(base,expo);
    
     printf("%d ^ %d = %f", base, expo, power);
    return 0;   	
}
int pow(int base, int expo)

{
    if(expo == 0)
        return 1;
    else if(expo > 0)
        return base * pow(base, expo - 1);
    
}
