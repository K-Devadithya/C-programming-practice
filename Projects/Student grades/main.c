#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr,n,i,j,t;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    
    ptr = (int*)malloc(n * 5 * sizeof(int));
    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(i=0;i<=n-1;i++){
        for(j=0;j<=4;j++){
            printf("\nEnter the marks of student %d for subject %d: ",i+1,j+1);
            scanf("%d",&ptr[i*5+j]);
        }
    }
    
    char response;
    printf("Enter Q to quit or any other key to continue: ");
    scanf(" %c",&response);
    
    while(response!='q'&&response!='Q'){    
        float a;
        printf("Enter A for average, G for grades of each student and Q to quit: \n");
        scanf(" %c",&response);
        
        if(response=='A'||response=='a'){
            for(i=0;i<=n-1;i++){
                a=0;
                for(j=0;j<=4;j++){
                    a+=ptr[i*5+j];
                }
                a/=5;
                printf("Average for student %d is %f\n",i+1,a);
            }
        }
        else if (response=='G'||response=='g'){
            for(i=0;i<=n-1;i++){
                t=0;
                for(j=0;j<=4;j++){
                    t+=ptr[i*5 + j];
                }
                if (t>=450&&t<=500){printf("Student %d's grade is A\n",i+1);}
                else if(t<450 && t>=400){printf("Student %d's grade is B\n",i+1);}
                else if(t<400&&t>=350){printf("Student %d's grade is C\n",i+1);}
                else if(t<350&&t>=300){printf("Student %d's grade is D\n",i+1);}
                else{printf("Student %d's grade is E\n",i+1);}
            }
        }
    }

    free(ptr);
    return 0;
}
