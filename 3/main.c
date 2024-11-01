// user input
#include <stdio.h>

int main(void)
{

    float x = 300.333, y = 20.12;
    int z = 4, j = 10;

    printf("x = %f\ny = %f\nz = %d\nj = %d\n", x, y, z, j);
    printf("************************\n");

    // x = z / j;
    // printf("x = %f\ny = %f\nz = %d\nj = %d\n", x, y, z, j);
    // printf("************************\n");

    // y = (float)z / j;
    // printf("x = %f\ny = %f\nz = %d\nj = %d\n", x, y, z, j);
    // printf("************************\n");

    j = x / y;
    printf("x = %f\ny = %f\nz = %d\nj = %d\n", x, y, z, j);

    return 0;
}