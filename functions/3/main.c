#include <stdio.h>

void sortArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    printf("printing array...\n");
    for (int i = 0; i < size; i++)
    {
        printf("|%d| ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    int array[] = {-5, 34, 6, 0, 12, -34, 3, 77, 1, 2, -45, 100, 95, 88, 33, 21};

    printArray(array, 16);

    sortArray(array, 16);

    printArray(array, 16);

    return 0;
}
