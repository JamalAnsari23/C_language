#include<stdio.h>
#include<string.h>
union student{
	int id;
	int marks;
	char fav_char;
	char name[25];
	};
	void main()
	{
		union student s1;		
		
						
			s1.fav_char='s';
		    s1.marks=98;
		    strcpy(s1.name,"Jamal");
		    	s1.id=111;
		    	
		
		printf("The s1 id is %d\n",s1.id);
		printf("The s1 marks is %d\n",s1.marks);
		printf("The s1 fav_char is %c\n",s1.fav_char);
		printf("The s1 name is %s\n",s1.name);
	}
