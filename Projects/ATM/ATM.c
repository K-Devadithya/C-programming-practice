#include <stdio.h>
#include <stdlib.h>

void display_balance() {
    int b;
    FILE *ptr=fopen("ATM.txt","r");
    if(ptr==NULL){printf("File not found:/\n");}
    else{
    fscanf(ptr,"%d",&b);
    printf("Your balance is Rs.%d\n",b);}}
void deposit_money(){
    int b,nb,a;
    FILE *p=fopen("ATM.txt","r+");
    if(p==NULL){printf("File not found:/\n");}
    else{printf("Enter the amount to be deposited: ");
        scanf("%d",&a);
        getchar();
        fscanf(p,"%d",&b);
        rewind(p);
        nb = b+a;
        fprintf(p,"%d",nb);
        fclose(p);
        printf("Successfully deposited Rs.%d",a);
    }}
void withdraw_money(){
    int b,nb,n;
    FILE *random =fopen("ATM.txt","r+");
    if(random==NULL){printf("File not found :/\n");}
    else{fscanf(random,"%d",&b);
        printf("Enter the amount to be withdrawn: \n");
        scanf("%d",&n);
        while(n>b){
            printf("Insufficient funds:/ please try again press 0 to quit or enter money to be withdrawn: \n");
            scanf("%d",&n);
        if(n==0){break;}}
        if(n!=0){
            nb=b-n;
            rewind(random);
            fprintf(random,"%d",nb);
            printf("Money withdraw successful your new balance is Rs.%d\n",nb);
        }
    }fclose(random);
}


int main() {
    int b;
    printf("Enter your balance: ");
    scanf("%d", &b);
    getchar();

    FILE *bank = fopen("ATM.txt", "w");
    fprintf(bank, "%d", b);
    fclose(bank);

    int r;
    printf("\nPlease enter what you would like to do\n");
    printf("0 to Exit\n1 to check the balance\n2 to deposit\n3 to withdraw: ");
    scanf("%d", &r);
    getchar();

    while (r != 0) {
        if (r == 1) {
            display_balance();
        }
        else if (r == 2) {
            deposit_money(); 
        }
        else if (r == 3) {
           withdraw_money();
        }

        printf("\nPlease enter what you would like to do\n");
        printf("0 to Exit\n1 to check the balance\n2 to deposit\n3 to withdraw: ");
        scanf("%d", &r);
        getchar();
    }

    printf("\nThank You please visit again :)\n");
    return 0;
}
