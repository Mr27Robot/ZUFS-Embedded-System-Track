#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the five-digit integer
    scanf("%d", &n);

    // Loop to calculate the sum of digits
    while (n != 0) {
        sum += n % 10;  // Add the last digit to the sum
        n /= 10;        // Remove the last digit
    }

    // Print the sum of the digits
    printf("%d\n", sum);

    return 0;
}
