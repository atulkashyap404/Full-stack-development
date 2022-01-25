#include<stdio.h>
#include<string.h>


int main()
{
    char cars[][10] = {"Maruti","jaguar", "Mahindra"};

    //cars[0] = "Toyota"; // so basically here i want to show you that we can not change directly string array elements, Through this way. 

    strcpy(cars[0], "Toyota"); // we use this function to change the element of the array of string.

    for (int  i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n",cars[i]);
    }
    

    return 0;
}