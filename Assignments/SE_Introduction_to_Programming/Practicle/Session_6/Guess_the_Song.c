#include<stdio.h>
#include<string.h>

void main()
{
    char songs[3][30] = {
        "Believer",
        "Perfect",
        "Tum Hi Ho"
    };

    char guess[30];

    int random = rand() % 3;

    do
    {
        printf("Guess the song: ");
        gets(guess);

        if(strcmp(guess, songs[random]) == 0)
            printf("Correct! You guessed the song.\n");
        else
            printf("Wrong guess! Try again.\n");

    } while(strcmp(guess, songs[random]) != 0);

    getch();
}
