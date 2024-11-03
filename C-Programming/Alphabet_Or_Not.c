#include <stdio.h>

int main() {

    char ch;
    printf("======= Alphabet or Not ======= \n");
    printf("Enter the Character: \n");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    } 
    else {
        printf("%c is not an alphabet.\n", ch);
    }
    printf("\n");
    return 0;
}
