#include<stdio.h>
#include<string.h>


int main()
{
    
    /*
    char x = 'X';
    char y = 'Y';
    char T;
    T = x;
    x = y;
    y = T;

    printf("%c\n", x);
    printf("%c\n", y);
    */
    // So now the condition will change and the char is now char  array string so now how we van change or swap the value. 


    char x[] = "Water";
    char y[] = "lemonade";
    char T[15];

    strcpy(T,x);
    strcpy(x,y);
    strcpy(y,T);

    printf("%s\n", x);
    printf("%s\n", y);

    return 0;
}