// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *pre;
    struct node *next;
};

struct node *createnode(int val) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->pre=NULL;
    newNode->next = NULL;
    return newNode;
}
struct node *createstart(struct node *head,int val){
    struct node *newNode=createnode(val);
    if(head==NULL){
        return newNode;
    }
    
    newNode->next=head;
    head->pre=newNode;
    return newNode;
    
}

struct node *createend(struct node *head,int val){
    struct node *newNode=createnode(val);
    if(head==NULL){
        return newNode;
    }
    struct node *temp=head;
   while(temp->next!=NULL){
    temp=temp->next;
   }
   temp->next=newNode;
   newNode->pre=temp;
   return head;
}

struct node *create_after_element(struct node *head,int val,int ele){
    struct node *newNode=createnode(ele);
    if(head==NULL){
        return newNode;
    }
    struct node *temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            newNode->next=temp->next;
            temp->next->pre=newNode;
            newNode->pre=temp;
            temp->next=newNode;
        }
        temp=temp->next;
    }
    return head;
}

struct node *create_before_element(struct node *head,int val,int ele){
    struct node *newNode=createnode(ele);
    if(head==NULL){
        return newNode;
    }
    struct node *temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            newNode->next=temp;
            newNode->pre=temp->pre;
            temp->pre->next=newNode;
            temp->pre=newNode;
        }
        temp=temp->next;
    }
    return head;
}

struct node *delete_by_value(struct node *head,int val){
    if(head==NULL){
        return 0;
    }
    struct node * temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            temp->next->pre=temp->pre->next;
            temp->pre->next=temp->next;
        }
        temp=temp->next;
    }
    return head;
}

struct node * delete_head(struct node * head){
    if(head==NULL){
        return 0;
    }
    head->next->pre=NULL;
    return head->next;
}
struct node *delete_end(struct node *head){
    if(head==NULL){
        return 0;
    }
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->pre->next=NULL;
    return head;
}

struct node * delete_after_element(struct node *head,int val){
    if(head==NULL){
        return 0;
    }
    struct node *temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            temp->next->next->pre=temp;
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }
    return head;
}


void display(struct node * head){
    if(head==NULL){
        printf("list is empty");
    }
    struct node *temp=head;
    while(temp!=NULL){
        printf(" %d--> ",temp->data);
        temp=temp->next;
    }printf("\n");
}
int main(){
    struct node *head=NULL;
    head=createstart(head,20);
    head=createstart(head,40);
    head=createstart(head,30);
    display(head);
    head=createend(head,50);
    head=createstart(head,60);
    printf("after adding at end\n");
    display(head);
    head=create_after_element(head,20,30);
    printf("after adding element\n");
    display(head);
    head=create_before_element(head,20,15);
    display(head);
    printf("after deleting element\n");
    head=delete_by_value(head,20);
    display(head);
    head=delete_head(head);
    printf("after deleting head element\n");
    display(head);
    head=delete_end(head);
     printf("after deleting end element\n");
    display(head);
    head=delete_after_element(head,40);
     printf("after deleting after element\n");
    display(head);
    
}

