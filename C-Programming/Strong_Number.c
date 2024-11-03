#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, originalNumber, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    
    while (number > 0) {
        remainder = number % 10;  
        sum += factorial(remainder); 
        number /= 10;             
    }

    
    if (sum == originalNumber) {
        printf("%d is a strong number.\n", originalNumber);
    } else {
        printf("%d is not a strong number.\n", originalNumber);
    }

    return 0;
}

