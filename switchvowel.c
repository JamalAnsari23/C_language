#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a alphabet\n");
	scanf("%ch", &ch);
	
	switch(ch)
		{
			case 'a':
				printf("vowel");
				break;
				case 'e':
					printf("vowel");
					break;
					case 'i':
						printf("vowel");
						break;
						case 'o':
							printf("Vowel");
							break;
							case 'u':
								printf("vowel");
								break;
								
								default:
									printf("consonant");
		}
}
