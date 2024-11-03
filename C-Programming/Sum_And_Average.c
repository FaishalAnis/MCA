#include <stdio.h>

int main() {
    int a, b, c;
    float sum, avg;

    printf("Addition and average of three numbers \n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3;

    printf("Sum of three numbers are: %.2f\n", sum);
    printf("Average of three numbers are: %.2f\n", avg);

    return 0;
}
