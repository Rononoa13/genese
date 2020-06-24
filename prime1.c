// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
// we can see that the 6th prime is 13.
// What is the 10 001st prime number?

#include <stdio.h>
#include <math.h>

int main()
{
    int number = 1;
    int flag = 0;
    int count = 0;
    while (count < 10001)
    {
        /* code */
        if (number == 1)
        {
            flag = 1;
        }
        if (number % 2 == 0)
        {
            flag = 1;
        }

        int boundary = (int)floor(sqrt(number));

        for (int i = 3; i <= boundary; i += 2)
        {
            /* code */
            if (number % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) // number is prime
        {
            /* code */
            int answer = number;
            count++;
            printf("Count = %d, Prime = %d\n", count, answer);
        }
        number++;
    }
}
