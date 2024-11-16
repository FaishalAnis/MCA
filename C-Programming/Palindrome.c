#include <stdio.h>

int main() {
    int a, num, rem, rev=0;
    printf("Enter the Number\n");
    scanf("%d", &a);
    num = a;
    while (a!=0) {
        rem = a % 10;
        rev = rev*10 + rem;
        a = a/10;
    }
    
    if (num == rev) {
        printf("It is a Pallindrome\n");
    }
    else {
        printf("Not a pallindrome\n");
    }

    return 0;
}
