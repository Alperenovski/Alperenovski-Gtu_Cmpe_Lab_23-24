#include <stdio.h>

int count(char *str, char target)
{
if (*str == '\0') 
    {
        return 0;
    }
    if (*str == target) {
        return 1 + count(str + 1, target);
    } else 
    {
        return count(str + 1, target);
    }
}
int main() 
{
    char str[] = "Hanna give me a letter with a"; 

    char target;
    printf("Aranan harfi girin: ");
    scanf(" %c", &target);
    int result = count(str, target);
    printf("'%c' harfi '%s' stringinde %d kez gecmektedir.\n", target, str, result);
    return 0;
}