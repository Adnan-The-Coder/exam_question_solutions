#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("./assets/File1.txt","r");
    fp2 = fopen("./system_generated_files/Problem1.txt","w");
    if (fp1 == NULL || fp2 == NULL){
        printf("Eror in opening file\n");
        exit(1);
    }

    while((ch=fgetc(fp1))!= EOF){
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}

