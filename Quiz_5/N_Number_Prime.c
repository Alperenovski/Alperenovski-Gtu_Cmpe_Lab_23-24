#include <stdio.h>

int isPrime(int num)
{
    int i = 2;
    if(num < 2)
    {
        return(0);
    }
    else if(num == 2)
    {
        return(1);
    }
    else
    {
    while(i * i <= num)
    {
        if((num % i) == 0)
        {
            return(0);
        }
        i++;
    }
    }
    return(1);
}
int main()
{
    int n;
    printf("Enter how many prime numbers you want to print:\t");
    scanf("%d", &n);
    int count = 0;
    int number = 2;
    printf("First %d prime numbers are:", n);
    while(count < n)
    {
        if(isPrime(number))
        {
        printf("%d, ", number);
        count++;
        }
        number++;
    }
    return(0);
}