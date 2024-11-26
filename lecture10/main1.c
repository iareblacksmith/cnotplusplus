#include <stdio.h>

int main(void)
{
    /*
        int sum1 = 0, sum2 = 0;

        for (int i = 1; i < 5; i++)
        {
            sum1 += i;
            continue;
            sum2 += i;
        }

        printf("sum1 = %d, sum2 = %d\n", sum1, sum2);

     */
    int sum1 = 0, sum2 = 0;

    for (int i = 1; i < 4; i++)
    {
        sum1 += i;
        break;
        sum2 += i;
    }

    printf("sum1 = %d, sum2 = %d\n", sum1, sum2);

    return 0;
}