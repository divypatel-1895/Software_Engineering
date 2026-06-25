#include<stdio.h>
#include<conio.h>

void main(){
	
	int ch;
	
	printf("enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\nMonday");
			break;
		case 2:
			printf("\nTuesday");
			break;
		case 3:
			printf("\nWensday");
			break;
		case 4:
			printf("\nThrusday");
			break;
		case 5:
			printf("\nFriday");
			break;
		case 6:
			printf("\nSaturday");
			break;
		case 7:
			printf("\nSunday");
			break;			
		default :
			printf("\nInvalid Choice ...");
	}
	
	getch();
}
