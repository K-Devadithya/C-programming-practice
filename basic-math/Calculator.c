#include <stdio.h>
#include <stdlib.h>
int main() {
    while(1){
    int operator,num1,num2,result;
    char r;
    printf("Welcome to the calculator choose what you would like to do!");
    printf("\n1 for +\n2 for -\n3 for *\n4 for /\n");
    scanf("%d",&operator);
    while(operator!=1&&operator!=2&&operator!=3&&operator!=4){
        printf("invalid input please enter 1-4: ");
             scanf("%d",&operator);
    }
    switch(operator){
        case 1:
            printf("enter the first number: ");
            scanf("%d",&num1);
            printf("enter the second number: ");
            scanf("%d",&num2);
            result=num1+num2;
            printf("Well the answer is %d",result);
            break;
        case 2:
            printf("enter the first number: ");
            scanf("%d",&num1);
            printf("enter the second number: ");
            scanf("%d",&num2);
            result=num1-num2;
            printf("Well the answer is %d",result);
            break;
        case 3:
            printf("enter the first number: ");
            scanf("%d",&num1);
            printf("enter the second number: ");
            scanf("%d",&num2);
            result=num1*num2;
            printf("Well the answer is %d",result);
            break;
        case 4:
            printf("enter the first number: ");
            scanf("%d",&num1);
            printf("enter the second number: ");
            scanf("%d",&num2);
            while(num2==0){printf("well 0 isn't possible,try something else: ");
            scanf("%d",&num2);}
            double f=(double)num1/(double)num2;
            printf("Well the answer is %.2lf",f); // Fixed: Now displays decimals properly
            break;
        
    }
    printf("\nPress (q) to exit the program or any key to continue: ");
    scanf(" %c",&r);
    if(r=='q'||r=='Q'){break;}
    system("cls");
}
    return 0;
}