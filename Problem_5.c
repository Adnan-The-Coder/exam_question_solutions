// Program to print student memo using files
#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    int roll;
    float CGPA;
};

int main(){
    
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];

    FILE *fp;
    fp = fopen("./system_generated_files/Problem5.txt","w");// put filename instead of path as per ur convenience 

    if(fp == NULL){
        printf("Error in opening File\n");
        exit(1);
    }

    for (i=0; i<n; i++ ){
        printf("\nEnter Student %d Details\n", i+1);
        printf("Enter Name: ");
        scanf("%s",s[i].name);
        printf("Enter Roll No.: ");
        scanf("%d",&s[i].roll);
        printf("Enter CGPA: ");
        scanf("%f",&s[i].CGPA);
        printf("-----------------------------\n");
    }

    for (i=0; i<n; i++){
        fprintf(fp,"Student %d Details\n",i+1);
        fprintf(fp,"Name: %s\n",s[i].name);
        fprintf(fp,"Roll No.: %d\n",s[i].roll);
        fprintf(fp,"CGPA: %f\n",s[i].CGPA);
        fprintf(fp,"-----------------------------\n");
    }
    
    return 0;
}
