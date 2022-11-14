#include<stdio.h>

int main(){
	
	float radius,diameter,circumference,area;
	
	printf("Enter the radius of circle\n");
	scanf("%f",&radius);
	
	diameter = 2 * radius;
	circumference = 2 * 3.14 *radius;
	area = 2 *3.14 *(radius * radius);
	
	printf("The diameter of circle is %f\n",diameter);	
	printf("The circumference of circle is %f\n",circumference);	
	printf("The Area of circle = %f sq.unit \n",area);
	return 0;
}
