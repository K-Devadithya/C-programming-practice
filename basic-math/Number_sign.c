#include<stdio.h>
int main(){
    int n;
    printf("Enter the number which you want to check: ");
    scanf("%d",&n);
    if(n>0){printf("%d is positive",n);}
    else if (n<0){printf("%d is negative",n);}
    else{printf("IT IS ZEROOO!");}
    
    while(getchar() != '\n');
    getchar();
    return 0;
}