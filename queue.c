// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int a[5];
int rare=-1;
int front=0;
void nqueue(int val){
    if(rare==4){
        printf("queue is full");
    }else{
        rare=rare+1;
        a[rare]=val;
        
    }
    
}
void dqueue(){
    if(rare==-1){
        printf("the queue is empty");
    }else{
    printf("the removed element is %d\n",a[front]);
    front=front+1;
    rare=rare-1;
    }
    
}
void peek(){
    if(front==-1){
        printf("the queue is empty");
    }else{
        printf("the peek element is %d\n",a[front]);
    }
}
void isempty(){
    if(front==-1){
        printf("the queue is empty");
    }
}
void isfull(){
    if(rare==4){
        printf("the queue is full");
    }
}

void display(){
    if(rare==-1){
        printf("the queue is empty");
    }else{
        for(int i=front;i<=rare;i++){
            printf("%d\n",a[i]);
        }
    }
}

int main() {
    nqueue(10);
    nqueue(20);
    printf("the element of queue:");
    display();
    peek();
    dqueue();
    printf("after removed");
    display();
    nqueue(30);
    printf("queue element are\n");
    display();
}