#include<stdio.h>
#include<conio.h>

struct Bio
{
    char description[100];
    int age;
};

struct InstaProfile
{
    char username[50];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile profile =
    {
        "divypatel",
        5000,
        {"Software Devloper", 21}
    };

    printf("Username    : %s\n", profile.username);
    printf("Followers   : %d\n", profile.followers);
    printf("Description : %s\n", profile.bio.description);
    printf("Age         : %d\n", profile.bio.age);

    return 0;
}
