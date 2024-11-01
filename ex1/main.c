// variables exercise solution
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

/*
- Declare two integer variables a and b with
the initial values 3 and 4.
- Declare two other integer variables c and d.
- Let a be a plus 5.
- Let d be the sum of a and b multiplied with
5 and c be the remainder of d divided by 13.
- Print the values of a,b,c and d.
*/