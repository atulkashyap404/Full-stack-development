#include<stdio.h>

//Decleration of the function
/*
void birthday()
{
    printf("Happy birthday dear friend\n");
    printf("Happy birthday dear friend\n");
    printf("Happy birthday dear friend\n");
    printf("----------------------------\n");
}


// function calling 
int main()
{
    birthday(); 
    birthday();
    birthday();

    return 0;
}*/

/*
//passing argument in function.

// here we pass the parametre in this function. which are char name[] as a string, and in age as a integer.
void birthday(char name[], int age)
{
    printf("\nHello %s happy  birthday dear",name);
    printf("\nnow your are %d chill bro",age);
}

int main()
{
    char name[] = "Atul";
    int age = 22;
    //here in birthday we pass the argument in this function which is name and age.
    birthday(name,age);
    return 0;
}
*/

/*
// returns = returns a value back to a calling function.
double square(double x)
{
    //double result = x * x;
    return x*x;
}

int main()
{
    double x = square(3.14);
    
    printf("%lf", x);
    return 0;
}
*/

// ternary operater = shortcut to if/else when assigning / returning a value 
// (condition) ? value if true : value if false.

int findMax(int x, int y)
{
    /*
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
    */


   return (x > y) ? x : y; // we are using here ternary operater.



}

int main()
{
    int max = findMax(6, 4);
    printf("%d", max);   
    return 0;
}