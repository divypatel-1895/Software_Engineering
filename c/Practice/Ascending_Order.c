#include<stdio.h>
#include<conio.h>

void main()
{
	int r[3],i,j;
	int temp;
	
	for(i=0;i<3;i++){
		printf("Enter your Element : ");
		scanf("%d",&r[i]);
	}
	
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(r[i] > r[j]){
				temp = r[i];
				r[i] = r[j];
				r[j] = temp;
			}
		}
	}
	
	printf("\nasceding order");
	for(i=0;i<3;i++){
		printf("\nr[%d] : %d",i,r[i]);
	}
	
	getch();
} 
