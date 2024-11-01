// triangle exercise solution
#include <stdio.h>

int main(void)
{
    int base = 0, height = 0; // delcaring integers
    float area = 0.0;         // declaring area of datatype float

    printf("enter the base and height of a triangle: "); // prompting the user
    scanf("%d%d", &base, &height);                       // getting base and height

    area = 0.5 * base * height; // typcasting using the 0.5

    printf("base = %d\nheight = %d\narea = %f\n", base, height, area); // final output

    return 0;
}

/*
- Read the base and height (integers) of a triangle.
- Compute its area.
- Print the base, height and area of the triangle.
*/