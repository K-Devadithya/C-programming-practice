#include <stdio.h>

int main() {
    int n, i;
    int a = 1, b = 1, next;

    printf("Enter upto how many terms do you need the series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%d\t", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}