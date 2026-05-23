#include <stdio.h>
#include <math.h>

int main() {

    int len = 0, sum = 0, digit, n, temp;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    // Count digits
    while (temp != 0) {
        len++;
        temp = temp / 10;
    }

    temp = n;

    // Calculate Armstrong sum
    while (temp != 0) {
        digit = temp % 10;
        sum += (int)round(pow(digit, len));
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);

    return 0;
}