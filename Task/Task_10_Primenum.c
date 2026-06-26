#include<stdio.h>
#include<conio.h>

int main() {
    int n, i, j, prime;

    printf("Enter the Num : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
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
