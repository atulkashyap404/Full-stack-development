#include<stdio.h>

int main()
{
    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Atul kumar manjhi");

    fclose(pF);
    return 0;
}