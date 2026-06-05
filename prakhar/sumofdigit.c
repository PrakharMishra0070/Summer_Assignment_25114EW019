#include <stdio.h>

int main() {
    int num , rem , sum =0 ; 

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num %10;  //last digit
        sum = sum + digit;  // Add digit to sum
        num = num / 10;     // Remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}