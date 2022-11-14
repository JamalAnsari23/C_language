#include<stdio.h>
#include<math.h>

int main(){
	
	float eng,hin,math,sci,sst;
	float total,average,percentage;
	
	printf("Enter your five subject marks :\n");
	scanf("%f%f%f%f%f",&eng,&hin,&math,&sci,&sst);
	
	total = eng+hin+math+sci+sst;
	average = (total / 5);
	percentage = (total/500)*100;
	
	printf("The total nmarks is : %.2f\n ",total);
	printf("The average marks is : %.2f\n ",average);
	printf("The percentage of marks is : %.2f\n",percentage);
	
	return 0;
}
