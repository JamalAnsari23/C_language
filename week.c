#include <stdio.h>
void main()
{
	int week;
	printf("Enter a day (1-7)\n");
	scanf("%d", &week);
	
	switch(week)
	{
		case 1:
			printf("monday");
			break;
			case 2:
				printf("Tuesday");
				break;
				case 3:
				printf("wednesday");
				break;
				case 4:
					printf("Thursday");
					break;
					case 5:
						printf("Friday");
						break;
							case 6:
								printf("Saturday");
								break;
								case 7:
									printf("Sunday");
									break;
									
									default:
										printf("invalid input! please enter a day (1-7)");
										break;
	}
	
}
