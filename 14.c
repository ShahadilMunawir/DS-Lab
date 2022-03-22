#include <stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * link;
}* front, * rear;
void push();
void pop();
void display();
int main(){
    int ch;
    while(1){
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter Your Choice:");
        scanf("%d", & ch);
        if(ch == 4){
            return 0;
        }
        switch(ch){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    }
    return 0;
}
void push(){
    struct node * p;
    int d;
    p = (struct node * ) malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d", & d);
    p -> data = d;
    p -> link = NULL;
    if(front == NULL){
        front = p;
    }else{
        rear -> link = p;
    }
    rear = p;
    return;
}
void pop(){
    struct node * p;
    if(front == NULL){
        printf("Queue is Empty");
        return;
    }
    printf("%d is deleted", front -> data);
    if(front == rear){
        free(front);
        rear = NULL;
        front = NULL;
    }else{
        p = front;
        front = p -> link;
        free(p);
    }
    return;
}
void display(){
    struct node * ptr;
    ptr = front;
    if(front == NULL){
        printf("Queue is Empty");
        return;
    }
    printf("Queue elements are....\n");
    while (ptr != NULL){
        printf("%d->", ptr -> data);
        ptr = ptr -> link;
    }
    return;
}