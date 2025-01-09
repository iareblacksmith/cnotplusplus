#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[50];
    char string2[50];
    char concat[150];
    gets(string1);
    gets(string2);

    int counter1, counter2;

    for (int i = 0; (string1[i] != '\0' && string2[i] != '\0'); i++)
    {
        if (string1[i] == 'm')
        {
            counter1++;
        }

        if (string2[i] == 'm')
        {
            counter2++;
        }
    }

    if (counter1 > counter2)
    {
        puts(string1);
    }
    else
    {
        puts(string2);
    }

    return 0;
}