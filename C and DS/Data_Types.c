#include<stdio.h>

int main()
{
     //Calculating simple interest
     // (1) input princple (p) rate of intrest (r) time in years (t)
     // (2) Interest = p x r x t / 100.
     // Data - type ------>
     // -----> Primitive types.
     // --> Int
     // --> float
     // --> char 
     // --> double
     // -----> Composite types.

     float p,r,t;
     float Interest;
    
     printf("Please enter the Princple\n");
     scanf("%f",&p);
     printf("Please enter the Rate\n");
     scanf("%f",&r);
     printf("Please enter the Time\n");
     scanf("%f",&t);

     Interest = p*r*t/100;

     printf("The interest is %.3f :  ",Interest );// here use presition control which is %.3f means after the decimal how many digits will print.



    return 0;
}