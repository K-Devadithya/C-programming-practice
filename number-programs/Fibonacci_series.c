#include <stdio.h>
int main(){
    int i,n,t,k;
    printf("Enter upto how many terms do you need the series: ");
    scanf("%d",&n);
    int l[n];
    l[1]=l[0]=1;
for(i=2;i<n;i++){
t = l[i-1]+l[i-2];
l[i]=t;}
for(k=0;k<n;k++){
    printf("%d\t",l[k]);
}
getchar();
getchar();
return 0;
}