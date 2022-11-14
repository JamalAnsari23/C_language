#include<stdio.h>
#include<math.h>

int main()
{
	
	double num,root;
	
	printf("Enter your number is : \n");
	scanf("%lf",&num);
	
	root = sqrt(num);
	
	printf("%.2lf number = %.2lf squre root",num,root);
	
	return 0;
}
