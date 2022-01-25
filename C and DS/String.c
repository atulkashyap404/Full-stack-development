#include<stdio.h>
#include<string.h>

int main()
{

    char string1[] = "Bro";
    char string2[] = "Code";


    // strlwr(string1);                        //convert a sting to lowercase
    // strupr(string1);                        //convert a sting to Uppercase
    // strcat(string1, string2);               //appends string2 to end of string1
    // strncat(string1, string2, 1);           //appends n charecters from dtring2 to string1
    // strcpy(string1, string2);               //copy string2 to string1
    // strncpy(string1, string2, 2);           //copy n character of string2 to string1

    //strnset(string1);                 //sets all charecters of a string to a given character.
    //strrev(string1, 'x', 1);                  //sets first n charecters of a string to a given charecter
    //strrev(string1);              //reverses a string       


   // int result = strlen(string1);          //return string length an int
   // int result = strcmp(string1, string2);  //string compare all charectres
   // int result = strncmp(string1, string2, 1);  //string compare n charectres
   // int result = strcmpi(string1, string1);  //string compare all (ignore case)
   // int result = strnicmp(string1, string1, 1);  //string compare n charectres (ignore case)
           


   // printf("%d", result);

    if(result == 0)
    {
        printf("These string are the same ");
    }
    else
    {
        printf("These string are not the same ");
    }

    return 0;
}