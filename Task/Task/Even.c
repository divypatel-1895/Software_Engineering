#include<stdio.h>
#include<stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an Even Number", num);
    } else {
        printf("%d Is Not Even Number", num);
    }

    return 0;
}
