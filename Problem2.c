// Merge two files into the Third File.
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp1,*fp2,*fp3;
    char ch;
    fp1 = fopen("./assets/File1.txt","r");
    fp2 = fopen("./assets/File2.txt","r");
    fp3 = fopen("./system_generated_files/Problem2.txt","w");
    
    while((ch = fgetc(fp1)!=EOF)){
        fputc(ch,fp3);
    }
    while ((ch = fgetc(fp2)!=EOF)){
        fputc(ch,fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}