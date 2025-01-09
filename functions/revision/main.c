#include <stdio.h>
int j;
void maxmin(int array[], int size)
{
    int max = array[0], min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("the max %d and the mini %d\n", max, min);
}

int sum(int array[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += array[i];
    }
    return result;
}

float avg(int array[], int size)
{
    float avgg = (float)sum(array, size) / size;
    return avgg;
}

void myFunction(void)
{
    static int value1 = 1;
    value1 += 3;
    int value2 = 1;
    value2 += 3;

    printf("value1 = %d\t", value1);
    printf("value2 = %d\n", value2);
    value1++;
    value2++;
}

void change(int x)
{
    x = 9;
}
void changeArray(int array[], int size)
{
    array[1] = 9;
}
int main(void)
{
    int array[3] = {1, 2, 3};
    int x = 5;
    printf("%d\t", array[0]);
    printf("%d\t", array[1]);
    printf("%d\n", array[2]);
    printf("%d\n", x);

    change(x);

    printf("%d\t", array[0]);
    printf("%d\t", array[1]);
    printf("%d\n", array[2]);
    printf("%d\n", x);

    changeArray(array, 3);

    printf("%d\t", array[0]);
    printf("%d\t", array[1]);
    printf("%d\n", array[2]);
    printf("%d\n", x);

    return 0;
}
/* Write a program that:
◼ Declare an array of 10 integers.
◼ Fill the array from the user.
◼ Call a function to print its maximum and
minimum.
◼ Call another function to return its sum.
◼ Call another function to return its average.
◼ Print the sum and the average in the main
function.*/