#include <stdio.h>

int main() {
   
    int a, b;
    printf("Enter the first Number\n");
    scanf("%d", &a);
    printf("Enter the second Number\n");
    scanf("%d", &b);
    
    if (a > b) {
        printf("A is a Maximum or Greater than B\n");
    }
    else if (b > a ) {
        printf("B is a Maximum or Greater than A\n");
    }
    else {
        printf("Both are Equal\n");
    }

    return 0;
}
