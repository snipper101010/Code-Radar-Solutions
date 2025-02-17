#include<stdio.h>
#include<ctype.h>  // For character checking functions

int main() {
    char ch;

    // Ask user for input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    }
    
    else if (!isalnum(ch)) {  // Checks if the character is neither a digit nor an alphabet
        printf("%c is a special character.\n", ch);
    }
    // Otherwise, it's a consonant
    else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}

