
#include <stdio.h>

void main()
{
    int i, end;

    /*
     * Input a number from user
     */
    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &end);

    /*
     * Print natural numbers from 1 to end
     */
    i=1;
    while(i<=end)
    {
        printf("%d\n", i);
        i++;
    }
}