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

    // Declare a pointer to the structure
    struct student *ptr = &s1;  // Pointer pointing to the first student (s1)

    // Printing the original list using self referential function
    printf("Roll:%d, Name:%s\n",s1.roll,s1.name);
    printf("Roll:%d, Name:%s\n",s1.next->roll,s1.next->name);
    printf("Roll:%d, Name:%s\n",s1.next->next->roll,s1.next->next->name);

    // Modify the name of the second student (s2) using a loop and pointer
    char new_name[] = "Doe Jr.";  // The new name
    int i = 0;

    // Loop to copy characters from new_name to s2.name
    struct student *ptr2 = ptr->next;  // Pointer to the second student (s2)
    while (new_name[i] != '\0') {
        ptr2->name[i] = new_name[i];  // Using pointer to structure to copy each character
        i++;
    }
    ptr2->name[i] = '\0';  // Null-terminate the string

    // Printing the updated name
    printf("New Name: %s\n", ptr2->name);

    return 0;
}

