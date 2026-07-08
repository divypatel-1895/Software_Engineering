#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3],i;
	
	for(i=0;i<3;i++){
		printf("Enter your Element : ");
		scanf("%d",&a[i]);
	}
	printf("\nRevers Array data");
	
	for(i=2;i>=0;i--){
		printf("\na[%d] : %d",i,a[i]);
	}
	getch();
} 
