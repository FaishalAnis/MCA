#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Enter the first Number\n");
    scanf("%d", &a);
    printf("Enter the second Number\n");
    scanf("%d", &b);
    printf("Enter the third Number\n");
    scanf("%d", &c);
    
    if (a > b  && a > c) {
        printf("A is a Maximum or Greater than B & C\n");
    }
    else if (b > a && b > c) {
        printf("B is a Maximum or Greater than A & C\n");
    }
    else if (c > a && c > b) {
        printf("C is a Maximum or Greater than A & B\n");
    }
    else {
        printf("All three are Equal OR Any Two are Equal\n");
    }

    return 0;
}
