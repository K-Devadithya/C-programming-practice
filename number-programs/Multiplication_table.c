#include <stdio.h>

int main(){
    int n,i;
    printf("Enter the number to print it's multiplication table till 10: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }

    while (getchar() != '\n'); 
    getchar();

    return 0;
}