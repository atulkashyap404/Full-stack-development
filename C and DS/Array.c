#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type.
    /*
double price[5]; //this is another way to create array.

    price[0] = 23.000;
    price[1] = 45.000;
    price[2] = 65.000;
    price[3] = 73.000;


    printf("%.2lf",price[0]);

    double prices[] = {10.0, 12.0, 43.3, 23.9};// one method to write array.
    */
    /*
   double prices[] = {10.0, 12.0, 43.3, 23.9,34.9867,54.000};

   for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
   {
       printf("%.2lf\n",prices[i]);
   }
   
    */

    // 2D array = an array, where each element is an entire array useful if you need a matrix, grid, or table of data.

    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
        int rows = sizeof(numbers)/sizeof(numbers[0]);
        int column = sizeof(numbers[0])/sizeof(numbers[0][0]);

        printf("rows : %d\n", rows);
        printf("column : %d\n", column);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("%d ", numbers[i][j]);
            }
            printf("\n");
            
        }
        



    return 0;
}