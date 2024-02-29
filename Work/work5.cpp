#include <stdio.h>
#include <conio.h>
int main() {
    float weights[5];
    float sum = 0, average;
    int i;

    printf("Enter weights of 5 people:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter weight of person %d: ", i + 1);
        scanf("%f", &weights[i]);
        sum += weights[i];
    }

    average = sum / 5;
    printf("\nAverage weight: %.2f\n", average); 

    return 0;
}

