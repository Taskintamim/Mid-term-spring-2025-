#include<stdio.h>

int main() {
    int length, width, area, perimeter;
    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %d, Perimeter = %d\n", area, perimeter);

    if(length == width) {
        printf("It is a square.\n");
    } else {
        printf("It is not a square.\n");
    }

    return 0;
}
