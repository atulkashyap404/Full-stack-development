#include <stdio.h>
#include <string.h>

int main()
{
    // for loop = repeats a section of code a limited amount of times.
    /*
    for (int  i = 1; i <= 10; i++)
    {
        printf(" Hi this is for loop\n");
    }
    */
    //---------------------------WHILE LOOP-------------------------
    // While loop  = repeat a section of code possibly unlimited times.

    // While some condition remains true

    // A while loop might not execute at all
    /*
    char name[25];
    printf("\nWhat's your name ? : ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\n You did not enter your name");
        printf("\nWhat's your name ? : ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);
    */


   //--------------------------do while loop-------------------

   // while loop = check a condition, Then executes a block of code if condition id true.

   // do while loop = always executes a block of code once, then checks a condition 
    /*
    int number = 0;
    int sum = 0;
    
    while(number > 0)
    {
        printf("Enter a # number above 0 : ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum+=number;
        }
    }
    

      
   do{
        printf("Enter a # number above 0 : ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum+=number;
        }
    }while(number > 0);

    printf(" Sum : %d", sum);
    */


   //----------------nested loop-------------------------

   //nested loop = a loop inside another loop.
     
     int row;
     int column;
     char symbol;
     printf("Enter the number of row : ");
     scanf("%d", &row);

     printf("Enter the number of column : ");
     scanf("%d", &column);

     scanf("%c");

     printf("Enter the symbol to use: ");
     scanf("%c", &symbol);


   for (int i = 1; i <=row; i++)
   {
       for (int  j = 1; j <= column; j++)
       {
           printf("%c", symbol);

       }
       printf("\n");
       
   }
   



    return 0;
}