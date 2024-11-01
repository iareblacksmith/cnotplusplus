// typecasting
#include <stdio.h>

// REMINDER: compiler sometimes does implicit conversions

int main(void)
{
    int x = 5, y = 2;
    float z = (float)x / y;

    printf("%f", z);

    return 0;
}
