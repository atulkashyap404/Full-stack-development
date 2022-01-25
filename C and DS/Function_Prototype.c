#include<stdio.h>

void hello(char[], int); // This is function prototype.

int main() // this main function
{
    // function prototype

    // What is it?
    // Function declaration, w/o  a body, before main()
    // Ensure that call to a function are made with the correct arguments
    char name[] = "Bro";
    int age = 21;
    hello(name, age);
    return 0;
}

void hello(char name[], int age) // This is hello function
{
    printf("\nHello %s",name);
    printf("\nyour are %d",age);
}

//<--------------------IMPORTANT NOTES----------------------->
/*
1. Many C compilers do not check for parameter matching.

2. Missing argument will result in unexpected behavior.

3. A function prototype causes the compiler to flag an error if argument are missing 

*/

//<--------------------ADVANTAGES------------------------------>
/*
1. Easier to navigate a program w/ main() at the top.

2. Helps with debugging

3. Commonly used in header files
*/