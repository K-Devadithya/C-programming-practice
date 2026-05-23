#include<stdio.h>
int main(){
    int i,s,n;
    char r;
    while(1){
        s = 0;
        printf("Enter the number upto which you would like to find the sum: ");
        scanf("%d",&n);
        for(i=0;i<=n;i++){
            s+=i;
        }
        printf("Well the sum upto %d is %d\n",n,s);
        printf("Press (q) to quit or any other key to continue: ");
        scanf(" %c",&r);
        if(r=='q'||r=='Q'){break;}
    }
return 0;
}