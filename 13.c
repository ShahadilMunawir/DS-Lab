#include <stdio.h>
#define maxsize 50

int queue[maxsize], front = -1, rear = -1;
void push();
void pop();
void display();
int main(){
    int ch, c = 1;
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
    int a;
    printf("Enter value:");
    scanf("%d", & a);
    if(rear == maxsize - 1){
        printf("Overflow");
        return;
    }
    rear++;
    queue[rear] = a;
    if(front == -1){
        front = 0;
    }
    return;
}
void pop(){
    int a;
    if(front == -1){
        printf("Queue Empty");
        return;
    }
    printf("%d is deleted", queue[front]);
    a = queue[front];
    queue[front] = 0;
    if(front == rear){
        front = rear = -1;
    }else{
        front++;
    }
    return;
}
void display(){
    int t;
    if(front == -1){
        printf("Queue is Empty");
    }else{
        printf("Queue elements are....\n");
        for(t = front; t <= rear; t++){
            printf("%d\t", queue[t]);
        }
    }
    return;
}