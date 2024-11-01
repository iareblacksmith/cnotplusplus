// rectangle exercise solution
#include <stdio.h>

int main(void)
{
    int length = 0, width = 0; // declaring variables

    printf("enter the length and width of rectangle: "); // prompting the user
    scanf("%d%d", &length, &width);                      // reading values

    printf("length = %d\nwidth = %d\narea = %d\n", length, width, length * width); // final output

    return 0;
}

/*
- Read the length and width (integers) of a rectangle.
- Compute its area.
- Print the length, width and area of the rectangle.
*/