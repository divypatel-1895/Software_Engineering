#include<stdio.h>
#include<conio.h>

int main() {
    int r, i, s, prime;

    printf("Enter the Num : ");
    scanf("%d", &r);

    for (i = 2; i <= r; i++) {
        prime = 1;

        for (s = 2; s <= i / 2; s++) {
            if (i % s == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1) {
            printf("%d ", i);
        }
    }

    getch();
}
