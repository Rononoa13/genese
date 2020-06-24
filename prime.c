// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
// we can see that the 6th prime is 13. 
// What is the 10 001st prime number?

#include <stdio.h>

int i;
int flag = 0;

int isPrime(int num);

int main()
{
    printf("%c", isPrime(2));
    return 0;
}

int isPrime(int num)
{

    for (i = 3; i < num; i += 2)
    {
        if (num % i == 0)
        {
            /* code */
            flag = 1;
            break;
        }
    }
    if (num == 1)
    {
        printf("%d is nor Prime nor Composite Number\n", num);
    }
    else if ((flag == 1) || (num % 2 == 0 && num != 2))
    {
        printf("%d is not a Prime Number\n", num);
    }
    else
    {
        /* code */
        printf("%d is a Prime Number\n", num);
    }
    return 0;
}