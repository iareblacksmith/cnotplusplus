#include <stdio.h>

int main(void)
{
    int a = 3, b = 4, c, d;

    a += 5;
    d = (a + b) * 5;
    c = d % 13;

    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);

    return 0;
}