#include<stdio.h>
//void swap(int *a, int *b);

void main()
{
	int x;
	int y;
	printf("x is a %d, y is a %d\n" ,x,y);
    swap(&x, &y);
    printf("x is a %d, y is a %d\n",x,y);
}
    
    void swap(int *a , int *b)
{

    	int temp;
    	temp = *a;
    	*a = *b;
    	*b = temp;}
    

