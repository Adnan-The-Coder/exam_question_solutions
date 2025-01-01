// Program to compare two files.
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp1, *fp2;
    char ch1,ch2;
    int flag = 0;

    fp1 = fopen("./assets/File1.txt","r");
    fp2 = fopen("./assets/File2.txt","r");

    if(fp1 == NULL || fp2 == NULL){
        printf("Error in opening file\n");
        exit(1);
    }

    while((ch1 = fgetc(fp1))!= EOF && (ch2=fgetc(fp2))!=EOF){
        if (ch1!=ch2){
            flag = 1;
            break;
        }
    }

    fclose(fp1);
    fclose(fp2);

    if (flag == 0)
        printf("Files are identical\n");
    else
        printf("Files are not identical\n");

    return 0;
}