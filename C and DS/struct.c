#include<stdio.h>
#include<string.h>

struct Player
{
    char name[12];
    int score;

};

int main()
{
    //struct = collection of related member ("variables")
    //    they can be of diffrent data types 
    //     listed under one name in a block of memory
    //      very similar to classes in other language (but no methods )

    struct Player player1;

    struct Player player2;
    
    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "Atul");
    player2.score = 8;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
    return 0;
}