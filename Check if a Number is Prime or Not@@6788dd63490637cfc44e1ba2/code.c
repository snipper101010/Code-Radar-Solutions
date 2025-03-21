#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
   
    scanf("%d", &n);

    if (n < 2) isPrime = 0;  // 0 and 1 are not prime
    for (i = 2; i * i <= n; i++) 
        if (n % i == 0) isPrime = 0; // Found a divisor

    printf("%s\n", isPrime ? "Prime" : "Not Prime");
    return 0;
}
