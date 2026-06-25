#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	printf("Enter your value A : ");
	scanf("%d",&a);
	printf("Enter your value B : ");
	scanf("%d",&b);
	
	printf("A : %d",a);
	printf("\nB : %d",b);
	
	printf("\n---- Artihmatic operation----");
	printf("\nSum : %d",a+b);
	printf("\nSub : %d",a-b);
	printf("\nMul : %d",a*b);
	
	getch();
	
}
