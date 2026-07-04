#include<stdio.h>
#include<conio.h>
void main()
{
    char playlistname[50] = "Yo Yo Honey Sing";
    int totalsongs = 40;
    float averageduration = 3.8;

    printf("My favorite Spotify playlist is %s.\nIt contains %d.\nsongs with an average duration of %.1f minutes.\n",
           playlistname, totalsongs, averageduration);

    getch();
}
