#include<stdio.h>
struct Address
{
	char city[15];
	int pin;
    long int phone[10];
};
struct employee
{
	char name[20];
	struct Address add;
};
void main()
{
	struct employee emp;
	printf("Enter employee name,city,pin,phone\n");
    scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone);  
    printf("Printing the employee information....\n");  
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
} 
