#include <stdio.h>
#include <stdlib.h>

// Defining the structure for a node in the linked list
struct Node {
    int data;           // Data part
    struct Node *next;  // Pointer to the next node
};

// Function to create a new node with a given value
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node)); // Allocate memory for a new node
    newNode->data = value;   // Assign the value to the data part
    newNode->next = NULL;     // Set the next pointer to NULL initially
    return newNode;
}

// Function to print the linked list
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data); // Print data of the current node
        temp = temp->next;            // Move to the next node
    }
    printf("NULL\n");
}

int main() {
    // Create nodes
    struct Node *head = createNode(10);  // Create the first node with value 10
    struct Node *second = createNode(20); // Create the second node with value 20
    struct Node *third = createNode(30);  // Create the third node with value 30

    // Link the nodes
    head->next = second;   // Link first node to second node
    second->next = third;  // Link second node to third node

    // Print the linked list
    printList(head);  // Output: 10 -> 20 -> 30 -> NULL

    return 0;
}
