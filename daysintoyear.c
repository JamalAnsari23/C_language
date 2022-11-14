#include<stdio.h>

int main(){
	int days,year,weeks;
	
	printf("Enter your days \n");
	scanf("%d",&days);
	
	year = days/365;
	weeks = (days%365)/7;
	days = days - ((year * 365) + (weeks * 7)); 
	
	printf("year = %d year \n",year);
	printf("weeks =  %d week\n",weeks);
	printf("days = %d days\n",days);
	
	return 0;
}
