#include<stdio.h>

int main(){
float length,breadth,perimeter;
	
	printf("Enter your length\n");
	scanf("%f",&length);
	printf("Enter your breadth\n");
	scanf("%f",&breadth);
	
	perimeter = 2*(length + breadth);
	printf("The perimeter of rectangle is %f ",perimeter);
	return 0;
}
