//#include<stdio.h>
//void main()
//{
//	int i;
//	for(i=0;i<6;i++)
//	{
//		printf("%d\n",i);
//	}
//}
//#include<stdio.h>
//void main()
//{
//	int i,j;
//	for(j=4,i=0;i<6;i++) /* expression is not must*/
//	{
//		printf("%d %d\n",i,j);
//	}
//}
//#include<stdio.h>
//void main()
//{
//	int i=0,j=5;
//	for(;i<6;i++) 
//	{
//		printf("%d %d\n",i,j);
//	}
//}
//#include<stdio.h>
//void main()
//{
//	int i=0,j=0;
//	for(;j<20,i<10;i++,j++) /* last condition will apply */
//	{
//		printf("%d %d\n",i,j);
//		//j++;
//	}
//}
#include<stdio.h>
void main()
{
	int i=0,j=0;
	for(;i<10;) 
	{
		printf("%d %d\n",i,j);
		i++,j++;
	}
}
