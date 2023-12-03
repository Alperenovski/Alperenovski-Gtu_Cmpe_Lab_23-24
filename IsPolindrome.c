#include <stdio.h>

int IsPalindrome(int num)
{
    int initialNumber = num;
    int result = 0;
    while(num)
    {
        result = (result * 10) + (num % 10);
        num /= 10;
    }
    if(initialNumber == result)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
int main()
{
    int number;
    printf("Enter the number you want to find out if it is a palindrome:\t");
    scanf("%d", &number);

    if(IsPalindrome(number))
    {
        printf("Entered number is Polindrome\n");
    }
    else
    {
        printf("Entered number is not Palindrome\n");
    }
}