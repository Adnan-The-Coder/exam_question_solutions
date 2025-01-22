// Program to implement the usage of pointer to structure and self referential function
#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[20];
    struct student *next;
}s1 = {1, "John"}, s2 = {2, "Doe"}, s3 = {3, "Jane"};

int main (){
    
    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL;

    
    // Printing the original list using self referential function
    printf("Roll:%d, Name:%s\n",s1.roll,s1.name);
    printf("Roll:%d, Name:%s\n",s1.next->roll,s1.next->name);
    printf("Roll:%d, Name:%s\n",s1.next->next->roll,s1.next->next->name);

    
    return 0;
}

