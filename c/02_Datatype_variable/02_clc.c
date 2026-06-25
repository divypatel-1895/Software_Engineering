#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 10;
	int b = 30;
	
	printf("A : %d",a);
	printf("\nB : %d",b);
	
	
	printf("\n----Calculation---");
	
	int sum;
	
	sum = a + b;
	printf("\nSum : %d",sum);
    printf("\nSub : %d",a-b);
    printf("\nMul : %d",a*b);
    printf("\nDivi : %d",a/b);

	
	getch();
}
