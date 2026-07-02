#include<stdio.h>
#include<conio.h>

struct student{
	int num;
	int runs;
	int wickets;
	char name[20];
};

void main()
{
	struct student s;
	printf("Enter Player Num : ");
	scanf("%d",&s.num);
	printf("Enter Player Name : ");
	scanf("%s",&s.name);
	printf("Enter Player Runs : ");
	scanf("%d",&s.runs);
	printf("Enter Player Wickets : ");
	scanf("%d",&s.wickets);
	
	printf("\n----Player details----");
	printf("\nNum : %d",s.num);
	printf("\nName : %s",s.name);
	printf("\nRuns : %d",s.runs);
	printf("\nWickets : %d",s.wickets);
	
	getch();
}
