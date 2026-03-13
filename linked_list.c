// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createnode(int val) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

struct node *createstart(struct node *head, int val) {
    struct node *newNode = createnode(val);
    newNode->next = head;
    head = newNode;
    return head;
}

struct node *createend(struct node *head, int val) {
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

struct node *middleafterelement(struct node *head, int ele, int val) {
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data == ele) {
            struct node *newNode = createnode(val);
            newNode->next = temp->next;
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
    }
    return head;
}

struct node *middlebeforeelement(struct node *head, int ele, int val) {
    if (head == NULL) return NULL;
    struct node *newNode = createnode(val);

    struct node *temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == ele) {
            newNode->next = temp->next;
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
    }
    return head;
}

struct node *del(struct node *head, int val) {
    if (head == NULL) {
        return 0;
    }
    // Handle head deletion
    if (head->data == val) {
        return head->next;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == val) {
            temp->next = temp->next->next;
            return head; // Exit after deleting
        }
        temp = temp->next;
    }
    return head;
}

struct node *del_before_head(struct node *head) {
    if (head == NULL) {
        return 0;
    }
    return head->next;
}

struct node *delete_end(struct node *head) {
    if (head == NULL || head->next == NULL) return NULL;
    struct node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

struct node *delete_before_element(struct node *head, int val) {
    if (head == NULL || head->next == NULL) return head;
    
    // If second element is target, delete head
    if (head->next->data == val) {
        return head->next;
    }

    struct node *temp = head;
    while (temp->next != NULL && temp->next->next != NULL) {
        if (temp->next->next->data == val) {
            temp->next = temp->next->next;
            return head;
        }
        temp = temp->next;
    }
    return head;
}
struct node *delte_after_element(struct node *head, int val) {
    if (head == NULL) {
        return 0;
    }
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data == val) {
            if (temp->next != NULL) {
                temp->next = temp->next->next;
            }
            return head;
        }
        temp = temp->next;
    }
    return head;
}

void displaylist(struct node *head) {
    struct node *temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }
    while (temp != NULL) {
        printf(" -->%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct node *head = NULL;

    printf("Starting list:\n");
    head = createstart(head, 75);
    head = createstart(head, 56);
    head = createstart(head, 87);
    head = createstart(head, 88);
    head = createstart(head, 89);
    
    displaylist(head);

    printf("After adding 45 after the element 56:\n");
    head = middleafterelement(head, 56, 45);
    displaylist(head);

    printf("After adding 76 before the element 45:\n");
    head = middlebeforeelement(head, 45, 76);
    displaylist(head);

    printf("after deleting\n");
    head = del(head, 45); // This logic is still a bit weird from user
    displaylist(head);

    head = del_before_head(head);
    displaylist(head);

    head = delete_end(head);
    displaylist(head);

    head = delete_before_element(head, 87);
    displaylist(head);
    head=delte_after_element(head,87);
    displaylist(head);

    return 0;
}