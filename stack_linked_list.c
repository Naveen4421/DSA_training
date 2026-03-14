// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* createnode(int val) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

struct node* push(struct node *head, int val) {
    struct node *newNode = createnode(val);
    newNode->next = head;
    head = newNode;
    return head;
}

struct node* pop(struct node *head) {
    if (head == NULL) {
        printf("The stack is empty\n");
        return NULL;
    } else {
        struct node *temp = head;
        printf("Popped value: %d\n", temp->data);
        head = head->next;
        free(temp);
        return head;
    }
}

struct node* peek(struct node *head) {
    if (head == NULL) {
        printf("The stack is empty\n");
        return NULL;
    } else {
        printf("Top element: %d\n", head->data);
        return head;
    }
}

void display(struct node *head) {
    struct node *temp = head;
    if (temp != NULL) {
        printf("Stack elements:\n");
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    } else {
        printf("The stack is empty\n");
    }
}

int main() {
    struct node *head = NULL;
    
    printf("Pushing 10...\n");
    head = push(head, 10);
    printf("Pushing 20...\n");
    head = push(head, 20);
    
    display(head);
    
    head = pop(head);
    
    printf("After popping:\n");
    display(head);
    
    return 0;
}