#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

// Global variables so functions can access and modify them
struct node *head = NULL, *temp = NULL;

void create() {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    
    if (head == NULL) {
        head = temp = newnode;
    } else {
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}

int main() {
    // Call create() here to test
    create();
    create();
    return 0;
}
