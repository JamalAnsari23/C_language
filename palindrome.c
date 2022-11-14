#include <stdio.h>
int main() {
    int n, reversedN = 0, remainder, originalN;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
        printf("\n %d N Number",n);
    }

    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

    return 0;
}
int isPalindrome(int num)
{
    /* 
     * Check if the given number is equal to 
     * its reverse.
     */
    if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;
}


/**
 * Recursive function to find reverse of any number
 */
int reverse(int num)
{
    int digit = (int)log10(num);
    
    
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
