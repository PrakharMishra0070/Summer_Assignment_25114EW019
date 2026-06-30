#include <stdio.h>

int main()
{
    int seats = 50;
    int choice, book;

    do
    {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Check Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Seats = %d\n", seats);
                break;

            case 2:
                printf("Enter number of seats to book: ");
                scanf("%d", &book);

                if(book <= seats)
                {
                    seats -= book;
                    printf("Booking Successful!\n");
                }
                else
                {
                    printf("Seats Not Available!\n");
                }
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}