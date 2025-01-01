#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // Open the source file for reading
    fp1 = fopen("./assets/File1.txt", "r");
    if (fp1 == NULL) {
        printf("Unable to open source file.\n");
        exit(1);
    }

    // Open the destination file for writing
    fp2 = fopen("copied.txt", "w");
    if (fp2 == NULL) {
        printf("Unable to create or open destination file.\n");
        fclose(fp1);
        exit(1);
    }

    // Read each character from source and write to destination
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(fp1);
    fclose(fp2);

    return 0;
}