#include <stdio.h>

struct Book
{
    int id;
    char name[30];
};

int main()
{
    struct Book b[10];
    int i,n;

    printf("Enter number of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%s",&b[i].id,b[i].name);
    }

    printf("\nBook List\n");

    for(i=0;i<n;i++)
    {
        printf("%d %s\n",b[i].id,b[i].name);
    }

    return 0;
}