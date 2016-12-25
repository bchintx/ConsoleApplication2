// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
There are TWO types of comments
Block style
*/

// line style

int main()
{
    // C data types

    // integer: int, short (16-bit), long (32-bit), signed/unsigned
    int i = 5;
    int j = 9 / 5;  // j = 1
    unsigned short ii = 3;

    // float or double (twice a float)
    float f = 3.1415;
    float g = 9 / 5;    // g = 1.8

    // bool is either true or false
    bool b = true;

    // char is a single character.  Literals enclose by single apostrophe
    char ch = 'a';

    // printf - built-in C function that sends a string to stdout
    printf("Contents of string go here.\n");
    printf("i = %d\n", i);
    printf("f = %f\n", f);
    printf("b = %d\n", b);  // will print '1' for true or '0' for false
    printf("ch = %c\n", ch);

    // special printf cases
    printf("f = %.2f\n", f);    // will print to two decimal places
    printf("i = %0x\n", i);     // will print as a hex value
    printf("i = %4d\n", i);     // will print within 4 spaces

    // BTW, you don't have to put just one on a line either
    printf("the value of f is '%.3f'\n  and the value of ch is '%c'.\n", f, ch);


    // Conditional
    if (i == 5)
    {
        // if i is indeed equal to 5, then execute this
        printf("I'm FIVE!!!\n");
    }
    else if (i == 6)
    {
        // otherwise, if i is equal to 6, then execute this
        printf("I'm SIX!!!\n");
    }
    else {
        // if i is not equal to 5, then execute this
        printf("I'm not FIVE.\n");
    }

    // complex conditions
    //   || is logical OR
    //   && is a logical AND
    //   ! is a logical NOT
    if ((i == 5) || (i == 6))
    {
        printf("i is not 5 or 6\n");
    }
    else if ((i >= 0) && (i < 10))
    {
        printf("i is a positive, single digit\n");
    }
    else if (i != 0)
    {
        printf("i is non-zero\n");
    }

    // C has three kinds of loops

    // for loop
    int idx;
    for (idx = 0; idx < 4; idx++)
    {
        printf("idx = %d\n", idx);
    }

    idx = 4;
    // pre-increment
    ++idx;
    // post-increment
    idx++;

    // side-effects
    idx = 5;
    if (++idx == 5)
        printf("WOWZA!\n"); // this will NOT be printed!
    idx = 5;
    if (idx++ == 5)
        printf("YOWZA!\n"); // this WILL be printed!

    // here's another for loop
    int idx2 = 0;
    for (; idx2++ < 4;)
    {
        printf("idx2 = %d\n", idx2);
    }


    printf("Hello World!\n");
    return 0;
}

