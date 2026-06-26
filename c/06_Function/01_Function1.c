#include<stdio.h>
#include<conio.h>

void demo(){
	printf("\nHelloo Divy Patel\n");
}

void display(){
	int i;
	for(i=1;i<=30;i++){
		printf("*");
	}
}

void main()
{
	display();
	demo();
	display();
	demo();
	display();
	printf("\nDivy Patel\n");
	display();
	
	getch();
}
