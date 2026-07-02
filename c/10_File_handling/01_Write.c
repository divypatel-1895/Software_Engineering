#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file;
	
	file = fopen("demo.txt","w");
	
	if(file ==NULL){
		printf("error null data..");
		return 1;
	}
	
	fprintf(file,"Hello Divy Patel is here");
	fclose(file);

	printf("File data printed successfully...");
	
	return 0;
}

