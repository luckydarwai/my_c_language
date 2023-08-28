// Rock, Paper and scissors Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defind inside <stdlib.h>
    return rand() % n;
}
int greater(char char1, char char2)
{
    // For Rock, Paper and scissors - Returns 1 if char1>char2 and 0 otherwise. if char1=char2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerschar = 0, compchar = 0;
    char mark[] = {'r', 'p', 's'};
                 //  0    1    2
    printf("\nWellcome to the Rock, Paper, Scissors Game !\n\n");
    for (int i = 0; i < 3; i++)
    {
        //    Take Player's input
        printf("Player 1's turn !\n");
        printf("choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerschar = mark[temp - 1];
        printf("you choose :  %c\n",playerschar);

        //    Generate computer's input
        printf("Computer's turn !\n");
        printf("choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        temp = generateRandomumber(3) + 1;
        compchar = mark[temp - 1];
        printf("Computer's choose :  %c\n",compchar);
        // compairing score  
        if (greater(compchar, playerschar) == 1)
        {
            compscore = compscore + 1;
            printf("Cpu got it !\n");
        }
        else if (greater(compchar, playerschar) == -1)
        {
            compscore += 1; // compchar=compchar+1;
            playerscore += 1;
            printf("its a Draw!\n");
        }
        else
        {
            playerscore += 1;
            printf("You got it!\n");
        }
            printf("Computer: %d\nYou: %d\n",compscore,playerscore);
    }

    if(compscore>playerscore)
    {
        printf("Computer Won the Game!");
    }
   else if(compscore<playerscore)
    {
        printf("you Won the Game!");
    }
   else{
       printf("Its a Draw");
   }
    return 0;
}