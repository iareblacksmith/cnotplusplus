#include <stdio.h>

int main(void)
{
    /*
        int sum = 0;

        while (34354)
        {
            sum++;
            if (sum == -10)
            {
                break;
            }
        }

        printf("sum = %d\n", sum);

     */
    for (int i = 1; i < 20; i += 5)
    {
        for (int j = 1; j < 4; j++)
        {
            printf("i = %d\n", i);
            break;
            printf("j = %d\n", j);
        }
    }
    return 0;
}