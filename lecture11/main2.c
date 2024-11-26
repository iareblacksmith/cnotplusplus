#include <stdio.h>

int main(void)
{
    int myArray[10000];

    for (int i = 0; i < 10000; i++)
    {
        myArray[i] = i * i * 2;
    }

    for (int i = 0; i < 10000; i++)
    {
        printf("%d\n", myArray[i]);
    }

    return 0;
}