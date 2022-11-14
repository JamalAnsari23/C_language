#include<stdio.h>
#include<mathh>

int main(){
	
	double base, expo, power;
	
	printf("Enter your base : \n");
	scanf("%lf",&base);
	
	printf("Enter your expo : \n");
	scanf("%lf",&expo);
	
	power = pow(base,expo);
	
	printf("%lf ^ %lf = %.2f ",base , expo, power);
	return 0;
}
