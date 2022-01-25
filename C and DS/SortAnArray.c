#include<stdio.h>
#include<string.h>


void sort(char array[], int size)
//void sort(int array[], int size)
{
    for (int  i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            
            // if we want to reverse the array then we have to do this 
            /*
            just change( >) then  to < in 
            */
        // if(array[j] < array[j+1])
           if(array[j] > array[j+1])
           {
               int temp = array[j];
               array[j] = array[j+1];
               array[j+1] = temp;

           } 
        }
        
    }
    

}


void printArray(char array[], int size)
//void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //printf("%d  ", array[i]);
        printf("%c  ", array[i]);
    }
    
}

// So basically this is bubble sort.

int main()
{
   // int array[] = {9,1,8,2,7,3,6,4,5};
    char array[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    printArray(array, size);

    return 0;
}
