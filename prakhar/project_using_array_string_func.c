#include <stdio.h>

void display(int roll[], char name[][30], int n)
{
    int i;
    printf("\nStudent Records\n");

    for(i=0;i<n;i++)
        printf("%d\t%s\n",roll[i],name[i]);
}

int main()
{
    int roll[20], n, i;
    char name[20][30];

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Roll: ");
        scanf("%d",&roll[i]);

        printf("Name: ");
        scanf("%s",name[i]);
    }

    display(roll,name,n);

    return 0;
}