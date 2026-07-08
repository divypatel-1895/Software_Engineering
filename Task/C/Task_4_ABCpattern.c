#include<stdio.h>
#include<stdio.h>

void main()
{
    char ch = 'A';
    int r, c;

    for(r = 1; r <= 4; r++)
    {
        for(c = 1; c <= r; c++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    getch();
}
