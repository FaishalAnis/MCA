#include <stdio.h>

int main() {

    int a;
    printf("Enter the Number within 100-500\n");
    scanf("%d", &a);
    
    if (a < 100 || a > 500) {
        printf("The number is outside the range 100-500\n");
    }
    else if (a % 5 == 0 && a % 11 == 0) {
        printf("The number is divisible by both 5 & 11: %d\n", a);
    }
    else  {
        printf("The number is not divisible by 5 & 11\n");
    }

    return 0;
}
