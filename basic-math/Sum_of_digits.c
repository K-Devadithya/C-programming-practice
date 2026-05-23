#include <stdio.h>

int main() {
    int n, t = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    // If the user inputs a negative number, flip it to positive
    if (n < 0) {
        n = -n;
    }

    for(; n != 0; n /= 10) {
        t += n % 10;
    }

    printf("The sum of digits in your number is %d\n", t);
    
    while (getchar() != '\n');
    getchar();
   
    return 0;
}