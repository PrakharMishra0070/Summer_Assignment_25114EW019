#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int ch;

    printf("Enter String: ");
    scanf("%s",str);

    do
    {
        printf("\n1.Length\n2.Reverse\n3.Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Length=%d",strlen(str));
                break;

            case 2:
            {
                strrev(str);
                printf("Reverse=%s",str);
                break;
            }

            case 3:
                break;

            default:
                printf("Invalid");
        }

    }while(ch!=3);

    return 0;
}