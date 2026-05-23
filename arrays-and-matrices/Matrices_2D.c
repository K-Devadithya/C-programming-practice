#include<stdio.h>

// Function prototypes
void adding(int m1[2][2], int m2[2][2]);
void subtracting(int m1[2][2], int m2[2][2]);
void multiplying(int m1[2][2], int m2[2][2]);
void determinant(int m1[2][2], int m2[2][2]);

// Addition
void adding(int m1[2][2], int m2[2][2]){
    int s[2][2], i, j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            s[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("\nThe resultant matrix after adding:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}

// Subtraction
void subtracting(int m1[2][2], int m2[2][2]){
    int s[2][2], i, j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            s[i][j] = m1[i][j] - m2[i][j];
        }
    }
    printf("\nThe resultant matrix after subtracting (M1 - M2):\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}

// Multiplication
void multiplying(int m1[2][2], int m2[2][2]){
    int s[2][2]={{0,0},{0,0}}, i, j, k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                s[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("\nThe resultant matrix after multiplying:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}

// Determinant
void determinant(int m1[2][2], int m2[2][2]){
    int d1 = m1[0][0]*m1[1][1] - m1[0][1]*m1[1][0];
    int d2 = m2[0][0]*m2[1][1] - m2[0][1]*m2[1][0];
    printf("\nDeterminant of matrix 1 = %d", d1);
    printf("\nDeterminant of matrix 2 = %d\n", d2);
}

int main(){
    int i, j, a1[2][2], a2[2][2];

    // Streamlined Input Section
    printf("Enter elements for Matrix 1:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &a1[i][j]);
        }
    }

    printf("\nEnter elements for Matrix 2:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &a2[i][j]);
        }
    }

    // Menu Loop
    int r;
    printf("\nChoose an operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Determinants\n0. Exit\nChoice: ");
    scanf("%d", &r);

    while(r != 0){
        if(r == 1) adding(a1, a2);
        else if(r == 2) subtracting(a1, a2);
        else if(r == 3) multiplying(a1, a2);
        else if(r == 4) determinant(a1, a2);
        else printf("\nInvalid input.\n");

        printf("\nChoose an operation:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Determinants\n0. Exit\nChoice: ");
        scanf("%d", &r);
    }

    printf("\nThank you!\n");
    return 0;
}