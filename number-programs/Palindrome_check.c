#include <stdio.h>

int main() {
    int n1, n2, rev = 0;

    printf("Enter the number which you would like to check if it is a palindrome: ");
    scanf("%d", &n1);

    n2 = n1;

    while (n1 != 0) {
        rev = rev * 10 + (n1 % 10);
        n1 = n1 / 10;
    }

    if (rev == n2) {
        printf("Yes! %d is a palindrome", n2);
    } else {
        printf("Nope! %d isn't a palindrome", n2);
    }

    return 0;
}