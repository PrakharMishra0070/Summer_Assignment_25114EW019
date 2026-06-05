#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a Prime Number");
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("Not a Prime Number");
            return 0;
        }
    }

    printf("Prime Number");

    return 0;
}