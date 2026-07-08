#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i, p = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        p = 0;
    else
        for (i = 2; i <= num / 2; i++)
            if (num % i == 0)
            {
                p = 0;
                break;
            }
    
    {
    if (p)
        printf("%d is a Prime Number.", num);
    else
        printf("%d is Not a Prime Number.", num);
 }

    getch();
}
