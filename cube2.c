#include<stdio.h>

void cubecube(int j){
	printf("%d is a your cube result\n",(j*j*j));
}
void main(){
	int j;
	printf("Enter your cube number\n");
	scanf("%d",&j);
	cubecube(j);
}
