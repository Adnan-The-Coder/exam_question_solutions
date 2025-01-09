#include<stdio.h>

// structures are passed to functions in 3 ways
// 1. each member of the structure is passed as parameter to the function
// 2. Address of each member is passed to the function 
// Structures passing to a function by passing address by call by refrence mechanism

struct student{
    int roll;
    char name[20];
    float marks;
};

void display(struct student *s){
    printf("Roll: %d\n",s->roll);
    printf("Roll: %s\n",s->name);
    printf("Roll: %f\n",s->marks);
}

int main(){
    struct student s1 = {1, "John", 99.9};
    display(&s1);

    return 0;

}