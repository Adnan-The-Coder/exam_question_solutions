// Program to implement string function without using library function
#include<stdio.h>

int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    printf("Length of the string: %d\n",i);

    // Concatenate the string
    char str_new[100];
    int j;
    printf("Enter another string:");
    gets(str_new);
    for(j=0;str_new[j]!='\0';j++)
        str[i+j]=str_new[j];
    str[i+j]='\0';
    printf("Concatenated string: %s\n",str);


    // Reverse the string
    int k;
    char temp;
    for(k=0;k<i/2;k++){
        temp=str[k];
        str[k]=str[i-k-1];
        str[i-k-1]=temp;
    }
    printf("Reversed string: %s\n",str);

    // Copy of strings
    char str_copy[100];
    for(k=0;str[k]!='\0';k++)
        str_copy[k]=str[k];
    str_copy[k]='\0';
    printf("Copied string: %s\n",str_copy);

    // Compare two strings
    char str_cmp[100];
    printf("Enter another string to compare: ");
    gets(str_cmp);
    for(k=0;str[k]!='\0' && str_cmp[k]!='\0';k++){
        if(str[k]!=str_cmp[k]){
            printf("Strings are not equal\n");
            break;
        }
    }
    if(str[k]=='\0' && str_cmp[k]=='\0')
        printf("Strings are equal\n");  


    return 0;
}