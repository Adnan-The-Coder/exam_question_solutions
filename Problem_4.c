// Program to count the number of characters, words and lines in a file. 
#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;

    fp = fopen("./assets/File3.txt","r");

    if(fp == NULL){
        printf("Error in opening file\n");
        exit(1);
    }
    
    while(!feof(fp)){
        characters++;
        ch = fgetc(fp);
        if (ch ==' ' || ch == ',' || ch == '\t' ){
            words++;
        }
        if (ch == '\n'){
            lines++;
        }
    }

    fclose(fp);
    printf("Number of characters: %d\n",characters);
    printf("Number of words: %d\n",words);
    printf("Number of Lines: %d\n",lines);

    return 0;
}