#include<stdio.h>
int main(){
    int y;
    printf("Enter the year which you would like to check: ");
    scanf("%d",&y);

    /* A year is a leap year if: (It is divisible by 4 AND NOT divisible by 100) OR (It is divisible by 400)*/
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        printf("%d is a leap year", y);
    } else {
        printf("%d is not a leap year", y);
    }

    while(getchar() != '\n');
    getchar();
    return 0;
}