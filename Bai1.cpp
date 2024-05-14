#include <stdio.h>
    // Your code here!
int main() 
{
    printf("Các số nguyên có 2 chữ số và là bội của 7:\n");
    for (int num = 10; num < 100; num++) 
    {
        if (num % 7 == 0) 
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
