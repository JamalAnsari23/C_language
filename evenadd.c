#include <stdio.h>

int main()
{
    int i, n, sum=0;

    
    printf("sum of all even  numbers between 1 to 100\n ");
    scanf("%d", &n);

    
    for(i=2; i<=n; i+2)
    {
        sum += i;
    }

    printf("Sum of all even number = %d", n, sum);
}
