#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int end) 
{
    if (end <= 0) {
        return 1; 
    }
        if (str[0] == str[end]) 
        {
        return isPalindrome(str + 1, end - 2);
        }
        else
        {
        return 0; 
        }
}
int main() {
    char str[] = "level";
    if (isPalindrome(str, strlen(str) - 1)) 
    {
        printf("%s bir palindromdur.\n", str);
    } 
    else 
    {
        printf("%s bir palindrom degildir.\n", str);
    }
    return 0;
}