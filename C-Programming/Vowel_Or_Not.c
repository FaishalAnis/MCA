#include <stdio.h>

int main() {

    char ch;
    printf("======Vowel or Not======= \n");
    printf("Enter the Character \n");
    scanf("%c", &ch);
    
    if (ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u' ||  
    ch == 'A' || ch =='E' || ch == 'I' || ch == 'O' || ch =='U') {
        printf("%c is a Vowel \n", ch);
    }
    else {
        printf("%c is a consonant \n", ch);
    }
    return 0;
}
