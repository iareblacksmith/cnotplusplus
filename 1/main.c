// escape sequences and comments
#include <stdio.h>

int main(void)
{
    /*
    this is a multi-line comment
    that will be ignored by the compiler
    */

    // this is a single-line comment

    // escape sequences
    // printf("let's start with a new line\n");                                 // new line
    // printf("the following gap will be tabs\t\tsee?\n");                      // horizontal tabs
    // printf("the following lettt\berss\b will be dell\beted\n");              // backspace
    // printf("the word \"fox\" will be in double quotes\n");                   // double quotes
    // printf("is this a question\?\n");                                        // question mark
    // printf("well then how do you do a backslash\? oh... this is how \\ \n"); // backslash
    // printf("this will leave a vertical tab \v");                             // vertical tab
    // printf("okay enough escape sequences...\n");                             // fin
    printf("   *\n  ***\n *****\n*******\n");

    return 0;
}

/* exercise:
create this output using a single printf() function and escape sequences:
   *
  ***
 *****
*******
*/
/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

// solution
// printf("   *\n  ***\n *****\n*******\n");