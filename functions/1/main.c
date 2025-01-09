#include <stdio.h>

int input(void)
{
    int x;
    scanf("%d", &x);
    return x;
}

int calc(int a, int b)
{
    int product = a * b;
    return product;
}

int output(int x)
{
    printf("%d\n", x);
}

int main(void)
{
    int x, y, z;
    x = input();
    y = input();
    z = calc(x, y);
    output(z);
    return 0;
}

/*
Write a program that has 4 functions:
◼ a function input() that reads an integer value and
returns it. It receives no arguments.
◼ a function calc() that receives two integer values,
calculates the product and returns the result.
◼ a function output() that receives an integer value
and prints it.
◼ the function main:
 it uses the function input() to read two values
 it uses the function calc() to calculate the product of the
two values
 it used the function output() to print the product
*/