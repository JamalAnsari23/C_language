#include<stdio.h>
void main()
{
	int arr[5];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0] 
    printf("%d address",ptr);

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
		printf("%d address ptr",ptr);
        // Move pointer to next array element
        ptr++;   
    }



   
}
