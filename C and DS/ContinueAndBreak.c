#include<stdio.h>

int main()
{

    // Continue = skip rest of code and forces the next iteration of loop
    //break = exit a loop / switch

    for (int i = 1; i <= 20; i++)
    {
        // if(i == 13)
        // {
        //     continue;
        // }

        if(i == 13)
        {
            break;
        }

        printf("%d\n", i);
    }
    

    return 0;
}