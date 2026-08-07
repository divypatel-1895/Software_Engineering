#include<stdio.h>
#include<stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 1 == 0) {
        printf("%d is a Odd Number", num);
    } else {
        printf("%d Is Not Odd Number", num);
    }

    return 0;
}
