#include <stdio.h>

int main() {
    int n1, n2, a, b, temp, gcd, lcm;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    // Prevent division-by-zero crashes if inputs are 0 or negative
    if (n1 <= 0 || n2 <= 0) {
        printf("Please enter positive numbers greater than 0.\n");
    } else {
        // Euclidean Algorithm to find GCD
        a = n1;
        b = n2;
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;

        // Calculate LCM using the formula: (n1 * n2) / GCD
        lcm = (n1 / gcd) * n2; // Division first prevents integer overflow

        printf("The LCM of %d and %d is %d\n", n1, n2, lcm);
    }

    // Cleanly clear the input buffer and pause the screen safely
    while (getchar() != '\n');
    getchar();

    return 0;
}