#include<stdio.h>
#include<conio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem menu[3] =
    {
        {"Paneer Butter Masala", 250.0, 4.5},
        {"Veg Biryani", 180.0, 4.3},
        {"Pizza", 299.0, 4.7}
    };

    int i;

    printf("Food Menu:\n\n");

    for(i = 0; i < 3; i++)
    {
        printf("Item Name : %s\n", menu[i].itemName);
        printf("Price     : %.2f\n", menu[i].price);
        printf("Rating    : %.1f\n\n", menu[i].rating);
    }

    return 0;
}
