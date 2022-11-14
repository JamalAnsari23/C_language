#include <stdio.h>

void printNaturalnumber(int firstnumber, int lastnumber)

  int main()
  {
  
  	
  	int firstnumber,lastnumber;
  	
  	printf("Enter your first number\n");
  	scanf("%d",&firstnumber);
  	printf("Enter your last number\n");
  	scanf("%d",&lastnumber);
  	
    printf("All natural number from  %d to %d\n",first number,last number);
    printnaturalNumber("firstnumber,lastnumber");
    
    return 0; 
}
  
  
  void printNaturalnumber(int firstnumber,int lastnumber)
{

    if(firstnumber > lastnumber)
        return 0;
    
    printf("%d, ", firstnumber);

    printNaturalNumber(firstnumber + 1, lastnumber);

}
