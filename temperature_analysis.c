#include<stdio.h>

int main() {
    int n, i, aboveAverage = 0;
    printf("Enter number of days: ");
    scanf("%d", &n);

    float temp[n], sum = 0, average, max, min;

    printf("Enter %d temperatures:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &temp[i]);
        sum += temp[i];
    }

    max = min = temp[0];
    for(i = 1; i < n; i++) {
        if(temp[i] > max)
            max = temp[i];
        if(temp[i] < min)
            min = temp[i];
    }

    average = sum / n;

    for(i = 0; i < n; i++) {
        if(temp[i] > average)
            aboveAverage++;
    }

    printf("Maximum Temperature = %.2f\n", max);
    printf("Minimum Temperature = %.2f\n", min);
    printf("Average Temperature = %.2f\n", average);
    printf("Number of days above average = %d\n", aboveAverage);

    return 0;
}

