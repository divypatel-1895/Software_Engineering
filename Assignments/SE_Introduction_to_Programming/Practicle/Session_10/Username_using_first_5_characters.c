#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char fullName[100];
    char username[100];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove newline character
    fullName[strcspn(fullName, "\n")] = '\0';

    if(strlen(fullName) < 5)
    {
        strcpy(username, fullName);
    }
    else
    {
        strncpy(username, fullName, 5);
        username[5] = '\0';
    }

    printf("Generated Username: %s\n", username);

    return 0;
}
