#include <stdio.h>
int main(){
    int n, s = 0;
    printf("Enter the number whose digits you want to count: ");
    scanf("%d", &n);

    int temp = n; 

    do {
        s += 1;
        temp = temp / 10;
    } while (temp != 0);

    printf("well the number contains %d digits\n", s);
    
    while(getchar() != '\n');
    getchar();
    return 0;
}