#include <stdio.h>
int main()
{
    int num;
    printf("Enter number:-\n");
    scanf("%d", &num);
    if (num == 1)
    { // 1 is not prime number
        printf("It is not prime number\n");
        return 0;
    }
    if (num == 2 || num == 3)
    { // 2 and 3 are prime numbers
        printf("%d is a prime number", num);
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0)
        {                                       // If any number is divisible with with 1 or itself
            printf("It is not prime number\n"); // It is not prime number
            return 0;
        }
    }
    printf("It is Prime number"); // Which only divisible with 1 or itself
    return 0;
}


/*
In this program we are checking if number is divisible by only either itself or with 1,
number is prime number.
*/