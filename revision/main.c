#include <stdio.h>

int main(void)
{
    /********* MINIMUM ***********
    int x = 0, y = 0, z = 0;
    int minimum = 0;

    printf("enter three integers to find the minimum: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    minimum = x; // assing minimum the value of x

    if (y < minimum) // check if y is less than the minimum (x)
    {
        minimum = y;
    }
    else if (z < minimum) // check if z is less than the minimum
    {
        minimum = z;
    }

    printf("the minimum is: %d\n", minimum); // print the minimum
    */

    /*
    // TEMPRATURE
    int temprature = 0;

    printf("Enter the current temprature: ");
    scanf("%d", &temprature);

    if (temprature <= 0)
    {
        printf("Weather Classificaion: Very Cold\n");
    }
    else if (temprature >= 1 && temprature <= 10)
    {
        printf("Weather Classificaion: Cold\n");
    }
    else if (temprature >= 11 && temprature <= 25)
    {
        printf("Weather Classificaion: Normal\n");
    }
    else if (temprature >= 26 && temprature < 35)
    {
        printf("Weather Classificaion: Hot\n");
    }
    else if (temprature >= 35)
    {
        printf("Weather Classificaion: Very Hot\n");
    }
    */
    return 0;
}