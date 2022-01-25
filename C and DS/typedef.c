#include<stdio.h>
#include<string.h>

typedef struct
{
    char name[25];
    char password[12];
    int id;

}User;


int  main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname";

    User user1 = {"Bro", "Password123", 19131034};
    User user2 = {"Atul", "Password342", 19131030};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    return 0;
}