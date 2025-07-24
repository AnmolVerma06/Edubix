#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node * top = NULL;

void push(int x){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = top;
    top = newnode;
}

void pop(){
    if(top == NULL){
        printf("stack is empty\n");
    }
    else{
        struct node * temp;
        temp = top;
        printf("popped element is %d\n", temp -> data);
        top = temp -> next;
        free(temp);

    }
}

void display(){
    if(top == NULL){
        printf("stack is empty\n");
    }
    else{ struct node * temp;
        temp = top;
        while(temp!= NULL){
            printf("%d\n", temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
    return 0;
}