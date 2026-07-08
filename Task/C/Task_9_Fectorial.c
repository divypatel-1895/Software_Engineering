#include<stdio.h>
#include<conio.h>

int total(int n){
	int i,sum = 1;
	for(i=n;i>=1;i--){
		sum = sum * i;
	}
	return sum;
}


void main()
{
	int num ;
	printf("enter your number : ");
	scanf("%d",&num);
	
	printf("Nuber : %d",num);
	printf("\nTotal Sum : %d",total(num));
}
