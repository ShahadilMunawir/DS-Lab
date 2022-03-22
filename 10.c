#include <stdio.h>
#define maxsize 50

int stack[maxsize], top = -1;
void create();
void display();
void pop();
void push();
int main(){
    int ch, top = -1;
    while(1){
        printf("\n1.Create\n");
        printf("2.Display\n");
        printf("3.Push\n");
        printf("4.Pop\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d", & ch);
        if(ch == 5){
            return 0;
        }
        switch(ch){
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            push();
            break;
        case 4:
            pop();
            break;
        }
    }
}
void create(){
    int che;
    do{
        top++;
        printf("Input element:");
        scanf("%d", & stack[top]);
        printf("Press 1 if more data other wise 0:");
        scanf("%d", & che);
    }while(che == 1);
    return;
}
void display(){
    int i;
    if(top == -1){
        printf("Stack is empty");
    }
    for(i = top; i >= 0; i--){
        printf("%d\t", stack[i]);
    }
    return;
}
void push(){
    int m;
    if(top == maxsize - 1){
        printf("Overflow");
        return;
    }
    top++;
    printf("Enter new element:");
    scanf("%d", & m);
    stack[top] = m;
    return;
}
void pop(){
    if(top == -1){
        printf("Underflow");
        return;
    }
    printf("%d is deleted", stack[top]);
    stack[top] = '\0';
    top--;
    return;
}