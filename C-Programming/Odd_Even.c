#include <stdio.h>

int main() {

    int a;
    printf("=======ODD OR EVEN======= \n");
    printf("Enter the Number \n");
    scanf("%d", &a);
    
    if (a % 2 == 0) {
        printf("The number is even\n");
    }
    else  {
        printf("The number is odd\n");
    }

    return 0;
}
