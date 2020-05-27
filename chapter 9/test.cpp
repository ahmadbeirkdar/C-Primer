#include <stdio.h>
 
int main()
{

 
    int player1;
    int playerAge;
        printf ("What is your name?");
        scanf ("%d", &player1);
       
        printf("How old are you?");
        scanf("%d", &playerAge);
        printf("%d? A good age, to be sure.\n", playerAge);
    char playerBlood;
        printf("And finally, what is your bloodtype?");
        scanf("%s", &playerBlood);
        printf("%c! very good.", playerBlood);
 
    return 0;
}