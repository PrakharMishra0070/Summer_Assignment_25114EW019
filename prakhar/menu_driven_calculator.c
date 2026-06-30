#include <stdio.h>

int main()
{
    int ch;
    float a,b;

    do
    {
        printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&ch);

        if(ch>=1 && ch<=4)
        {
            printf("Enter two numbers: ");
            scanf("%f%f",&a,&b);
        }

        switch(ch)
        {
            case 1:
                printf("Sum = %.2f",a+b);
                break;

            case 2:
                printf("Difference = %.2f",a-b);
                break;

            case 3:
                printf("Product = %.2f",a*b);
                break;

            case 4:
                if(b!=0)
                    printf("Division = %.2f",a/b);
                else
                    printf("Division by zero not possible");
                break;

            case 5:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(ch!=5);

    return 0;
}