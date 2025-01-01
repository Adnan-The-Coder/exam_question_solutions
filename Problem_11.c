// Program to illustrate the usage of malloc and calloc function 
#include<stdio.h>
#include<stdlib.h>


int main(){
    int *ptr1;
    ptr1 = (int*)malloc(5*sizeof(int));
    if(ptr1 == NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    else{
        printf("Memory successfully allocated using malloc\n");
        free(ptr1);
    }

    int *ptr2;
    ptr2 = (int*)calloc(5, sizeof(int));
    if(ptr2 == NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    else{
        printf("Memory successfully allocated using calloc\n");
        free(ptr2);
    }
}