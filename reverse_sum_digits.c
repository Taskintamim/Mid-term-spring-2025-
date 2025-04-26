#include<stdio.h>

int main() {
    int num, reversed = 0, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        sum += digit;
        num = num / 10;
    }

    printf("Reversed: %d\n", reversed);
    printf("Sum of digits: %d\n", sum);

    return 0;
}

