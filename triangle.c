#include<stdio.h>
#include<math.h>

int main(){
	
	int angle_a,angle_b,angle_c;
	
	printf("Enter your two angel : \n");
	scanf("%d%d",&angle_a,&angle_b);
	
	angle_c = 180 - (angle_a + angle_b);
	
	printf("The third angle is this : %d angle",angle_c);
	return 0;
}
