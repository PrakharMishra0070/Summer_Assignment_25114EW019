 #include <stdio.h>

int main() {
    int num, reverse = 0, rem ;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem  = num % 10;          // Get last digit
        reverse = reverse * 10 + rem ;
        num = num / 10;           // Remove last digit
    }

    printf("Reverse number = %d", reverse);

    return 0;
}