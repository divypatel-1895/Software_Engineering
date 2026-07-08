#include<stdio.h>
#include<conio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is a Positive number.", num);
    }
    else if (num < 0)
        printf("%d is a Negative number.", num);
        
    else
        printf("The number is Zero.");

    getch();
}
