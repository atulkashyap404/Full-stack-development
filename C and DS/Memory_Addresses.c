#include<stdio.h>

int main()
{

    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (bytes) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)
     // char
     /*
    printf("*************************<--char--->**********************");
    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
*/
 /*
    printf("*********************<---short--->**************************\n");
// short
   
    short a = 'X';
    short b = 'Y';
    short c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
*/
    // int
    /*
    printf("*********************<---int--->**************************\n");
    int a = 'X';
    int b = 'Y';
    int c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
*/
     // double
    /*
    printf("********************<---double--->**************************\n");
    double a = 'X';
    double b = 'Y';
    double c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    */

   char a;
   char b[2];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    printf("%p\n", &a);
    printf("%p\n", &b);

    
    return 0;
}