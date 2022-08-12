#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    int n = get_int("insert number :");
    // every prime number applicable with the equation (6*x)-1 or (6*x)+1
    if ((n + 1) % 6 == 0 || (n - 1) % 6 == 0 || n == 2 || n == 3)
    {
        printf("prime number\n");
    }
    else
    {
        printf("it is not a prime number\n");
    }
}
