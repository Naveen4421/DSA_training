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
struct node* nqueue(struct node *head, int val) {
    struct node *newNode = createnode(val);
    if (head == NULL) {
        return newNode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

struct node *dqueue(struct node *head) {
    if (head == NULL) {
        printf("the queue is empty\n");
    } else {
        struct node *temp = head;
        printf("the removed element is: %d\n", temp->data);
        head = head->next;
        free(temp);
    }
    return head;
}

void display(struct node *head) {
    if (head == NULL) {
        printf("the queue is empty\n");
    } else {
        struct node *temp = head;
        printf("Queue elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void isempty(struct node * head) {
    if (head == NULL) {
        printf("the queue is empty\n");
    } else {
        printf("the queue is not empty\n");
    }
}

int main() {
    struct node* head = NULL;
    
    printf("Enqueuing 10, 20, 30...\n");
    head = nqueue(head, 10);
    head = nqueue(head, 20);
    head = nqueue(head, 30);
    
    display(head);
    
    head = dqueue(head);
    display(head);
    
    head = dqueue(head);
    display(head);
    
    return 0;
}