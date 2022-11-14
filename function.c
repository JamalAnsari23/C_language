 #include<stdio.h>
int sum(int x,int y)
{
	return x+y;
}
void main()
{
	int x;
	int y;
	int result=0;
//	printf("The sum of %d\n",x+y);
printf("Enter the value of x and y\n",x,y);
    scanf("%d %d",&x, &y);
	result=sum(x,y);
	printf("the sum of %d\n",result);

}
