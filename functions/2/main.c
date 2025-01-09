#include <stdio.h>

void mm(int array[], int size)
{
    int mini;
    int max;
    max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] >= max)
        {
            max = array[i];
        }
    }
    mini = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] <= mini)
        {
            mini = array[i];
        }
    }
    printf("the max is %d and the mini is %d \n", max, mini);
}
int sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
float average(int array[], int size)
{
    return sum(array, 10) / (float)size;
}
int main(void)
{
    int array[10];
    printf("please enter an inrteger of array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    mm(array, 10);
    int summ = sum(array, 10);
    printf("the sum of array = %d \n", summ);
    float avg = average(array, 10);
    printf("the average of the array = %.2f\n", avg);

    return 0;
}

/*
 Write a program that:
    ◼ Declare an array of 10 integers.
    ◼ Fill the array from the user.
    ◼ Call a function to print its maximum and
    minimum.
    ◼ Call another function to return its sum.
    ◼ Call another function to return its average.
    ◼ Print the sum and the average in the main
    function.
*/