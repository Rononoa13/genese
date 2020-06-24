// Write a program file which prints one line which 
// is the 
// output (eg. problem1.py if you do it in python)

#include <stdio.h>
#include <string.h>

int main()
{
    char array[20] = "Print one line";
    for (int i = 0; i < strlen(array); i++)
    {
        /* code */
        printf("%c\n", array[i]);
    }
    return 0;
}
