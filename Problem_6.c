// Program to compute monthly salary of n employees using array of structures
// using each employee's basic pay. The DA is computed as 52% of basic pay
// Gross salary is computed as the sum of basic pay and DA.
#include<stdio.h>
#include<stdlib.h>

struct employee{
    char name[20];
    int id;
    float basic_pay;
    float DA;
    float gross_salary;
};

int main(){

    int n,i;
    printf("Enter Number of Employees: ");
    scanf("%d",&n);
    struct employee s[n];

    for (i=0; i<n; i++){
        printf("\nEnter Employee %d Details\n",i+1);
        printf("Enter Name: ");
        scanf("%s",s[i].name);
        printf("Enter ID: ");
        scanf("%d",&s[i].id);
        printf("Enter Basic Pay: ");
        scanf("%f",&s[i].basic_pay);
        s[i].DA = 0.52 * s[i].basic_pay;
        s[i].gross_salary = s[i].basic_pay + s[i].DA;
        printf("-----------------------------\n");
    }

    FILE *fp;
    fp = fopen("./system_generated_files/Problem6.txt","w");

    if (fp == NULL){
        printf("Error in opening File\n");
        exit(1);
    }

    for(i=0; i<n; i++){
        fprintf(fp,"Employee %d Details\n",i+1);
        fprintf(fp,"Name: %s\n",s[i].name);
        fprintf(fp,"ID: %d\n",s[i].id);
        fprintf(fp,"Basic Pay: %f\n",s[i].basic_pay);
        fprintf(fp,"DA: %f\n",s[i].DA);
        fprintf(fp,"Gross Salary: %f\n",s[i].gross_salary);
        fprintf(fp,"-----------------------------\n");
    }

    return 0;
}