#include <stdio.h>

struct Item
{
    int id,qty;
    char name[30];
    float price;
};

int main()
{
    struct Item item[20];
    int n,i;

    printf("Enter number of items: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nItem %d\n",i+1);

        printf("ID: ");
        scanf("%d",&item[i].id);

        printf("Name: ");
        scanf("%s",item[i].name);

        printf("Quantity: ");
        scanf("%d",&item[i].qty);

        printf("Price: ");
        scanf("%f",&item[i].price);
    }

    printf("\nInventory Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nID:%d",item[i].id);
        printf("\nName:%s",item[i].name);
        printf("\nQuantity:%d",item[i].qty);
        printf("\nPrice:%.2f\n",item[i].price);
    }

    return 0;
} 