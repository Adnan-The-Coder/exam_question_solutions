// Program to implement the usage of pointer to structure and self referential function
#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[20];
    struct student *next; // self refrential struct to point towards others struct var
}s1 = {1, "John"}, s2 = {2, "Doe"}, s3 = {3, "Jane"};

// s1 -> s2 -> s3 -> Null
// we are accessing s2 and s3 with s1 using s2 and s3 address pointers

int main (){
    
    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL;


    // Printing the original list using self referential function
    printf("Roll:%d, Name:%s\n",s1.roll,s1.name);
    printf("Roll:%d, Name:%s\n",s1.next->roll,s1.next->name);
    
    // printf("Roll:%d, Name:%s\n",s1.next->next->roll,s1.next->next->name);
    printf("Roll:%d, Name:%s\n",s2.next->roll,s1.next->next->name);


    return 0;
}


