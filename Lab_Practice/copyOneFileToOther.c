// Program to copy the contents of one file to another file.
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("./assets/File1.txt","r");
    fp2 = fopen("./system_generated_files/Problem1.txt","w");
    if (fp1 == NULL || fp2 == NULL){
        printf("Error in opening file\n");
        exit(1);
    }
    while((ch = fgetc(fp1)) != EOF){
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);


    return 0;
}

// Method 2


// #include <stdio.h>
// #include <stdlib.h>

// int main(){

//     FILE *fp1,*fp2;
//     char ch;
//     fp1 = fopen("./assets/File1.txt","r");
//     fp2 = fopen("./assets/File2.txt","r");
    
//     while(!feof(fp1)){
//         fscanf(fp1,"%c",&ch);
//         fprintf(fp2,"%c",ch);

//     }
//     fclose(fp1);
//     fclose(fp2);

//     return 0;
// }