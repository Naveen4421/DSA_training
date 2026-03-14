// Online C compiler to run C program online
#include <stdio.h>
int a[5];
int n;
int top=-1;

 void push(int val){
    //printf("enter the length of the array\n");
    //scanf("%d",&n);
    if(isfull() ){
        printf("stack is full");
    }
    else{
        top=top+1;
        a[top]=val;
    }
}
    
void display(){
    if(isempty()){
        printf("the stack is empty please fill the element ");
    }
    else{
    for(int i=0;i<=top;i++){
        printf("|%d|\n",a[i]);
    }
    }
    
}
void pop(){
    if(isempty()){
        printf("stack is empty:");
    }else{
        printf("removed value from the stack %d\n",a[top]);
        top=top-1;
    }
}

void peek(){
    if(isempty()){
        printf("stack is empty there is no top element");
    }
    else{
        printf("top element is:%d\n",a[top]);
    }
    
    
}
int isempty(){
    if(top==-1){
        return 1;
        
    }
    return 0;
}

int isfull(){
    if(top==5-1){
        return 1;
    }
    return 0;
}
int main() {
    // Write C code here
    push(5);
    push(3);
    push(2);
    push(4);
    
    display();
    pop();
    display();
    peek();
    isempty();

    return 0;
}