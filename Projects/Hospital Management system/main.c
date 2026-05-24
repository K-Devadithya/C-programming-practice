#include<stdio.h>
struct patients 
{
    char name[50];
    int age;
    int id;
    char disease[100];
    char gender;
};
void store_data(struct patients x){
FILE *ptr;
ptr = fopen("Hospital.dat","ab");
if(ptr==NULL){printf("No data found\n");}
else{
fwrite(&x,sizeof(struct patients),1,ptr);
fclose(ptr);}
}
void display(){
    struct patients x;
    FILE *ptr = fopen("Hospital.dat","rb");
    if(ptr==NULL){printf("No data found\n");}
    else{
        while(fread(&x,sizeof(struct patients),1,ptr)){
            printf("Name : %s\nid : %d\nage : %d\nGender : %c\nDisease : %s\n",x.name,x.id,x.age,x.gender,x.disease);
        }
    }fclose(ptr);
}
void search(int id){
    FILE *ptr = fopen("Hospital.dat","rb");
    struct patients x;
    int found = 0;
    if(ptr==NULL){
        printf("No data available\n");
        return;
    }
    while(fread(&x,sizeof(struct patients),1,ptr)){
        if(x.id==id){
            printf("Patient found successfully\nName : %s\nid : %d\nage : %d\nGender : %c\nDisease : %s\n",x.name,x.id,x.age,x.gender,x.disease);
            found=1;
            break;
        }
    }
    fclose(ptr);
    if (!found){printf("\nSorry no patient found on the database:/");}
}
int main(){
    struct patients p;
    char r;
    do
    {
        printf("Enter the name of the patient: ");
        scanf(" %[^\n]", p.name);
        printf("\nEnter the age of the patient: ");
        scanf("%d",&p.age);
        printf("\nEnter the id of the patient: ");
        scanf("%d",&p.id);
        printf("\nEnter the name of the diesease the patient is suffering from: ");
        scanf(" %[^\n]", p.disease);
        printf("\nEnter the Gender of the patient[M/F]: ");
        scanf(" %c",&p.gender);
        store_data(p);
        printf("Would you like to add another patient?[any key if yes/N for no]: ");
        scanf(" %c",&r);
    } while (r!='n' && r!='N');
    int r1;
    printf("Select what you would like to do\n1 to display all patients list\n2 to search by patient id\n0 to exit\n");
    scanf("%d",&r1);
    while(r1!=0&&r1!=1&&r1!=2){printf("Please give a valid response:/\n");
    scanf("%d",&r1);}
    while(r1!=0){
        if(r1==1){display();}
        else{int id;
            printf("Enter the id of the patient: ");
            scanf("%d",&id);
            search(id);}
            printf("Select what you would like to do\n1 to display all patients list\n2 to search by patient id\n0 to exit\n");
    scanf("%d",&r1);
    }
    return 0;
}
