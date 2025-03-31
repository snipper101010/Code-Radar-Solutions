#include <stdio.h>

int main() {
    int i, j, n;
    
    scanf("%d", &n);

    // Upper part of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {  // Printing spaces
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {  // Printing stars
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {  // Printing spaces
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {  // Printing stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
