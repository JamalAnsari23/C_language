//#include<stdio.h>
//void main()
//{
//	label:
//		printf("we are inside the label\n");
//		goto end;
//		printf("Hello world\n");
//		goto label;
//		end:
//			printf("We are at end");
//}
#include<stdio.h>
void main()
{
	int num,i,j;
	for(i=0;i<8;i++)
	{
		printf("%d\n",i);
		for(j=0;j<8;j++)
		{
			printf("Enter the number. enter 0 to exit\n");
			scanf("%d",&num);
			if(num==0){
				goto end;
			}
		}
		
	}
	end:
		//return 0;
	
}

