#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of integers must be greater than 0.\n");
        return 1;
    }

    int numbers[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / n;

    printf("The average of the entered integers is: %.2f\n", average);

    return 0;
}
