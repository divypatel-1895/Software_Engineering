#include<stdio.h>
#include<conio.h>

int main()
{
    int orders[5] = {250, 300, 450, 500, 350};
    int *ptr = orders;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Order Amount = %d\tAddress = %p\n", *(ptr + i), (ptr + i));
    }

    return 0;
}
