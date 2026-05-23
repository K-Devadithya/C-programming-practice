#include<stdio.h>
#include<math.h>
int main(){
int isPrime,j,i,n;    
printf("Enter the number till which you would like to find the prime numbers: ");
    scanf("%d",&n);
    
for(i=2;i<=n;i++){
    isPrime=1;
    for(j=2;j<=sqrt(i);j++){
        if(i%j==0){isPrime=0;
        break;}    
    }
    if(isPrime==1){printf("%d\t",i);}
}

while(getchar() != '\n');
getchar();
return 0;
}