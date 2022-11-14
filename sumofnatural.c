#include <stdio.h>

int main()
{
    int i, n, sum=0;

    
    printf("sum of first natural numbers\n ");
    scanf("%d", &n);

    
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);
}
