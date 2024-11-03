#include <stdio.h>

int main() {

    int a, b, c;
    printf("Enter the Number\n");
    scanf("%d", &a);
    
    if (a == 0) {
        printf("The number is Zero\n");
    }
    else if (a > 0) {
        printf("The number is positive\n");
    }
    else  {
        printf("The number is negative\n");
    }

    return 0;
}
