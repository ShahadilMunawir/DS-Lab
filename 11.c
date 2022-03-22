#include <stdio.h>
#include<malloc.h>
#define maxsize 50
struct node {
    int data;
    struct node * link;
};
struct node * top;
void create();
void traverse();
void pop();
void push();
int main() {
    int c;
    while (1) {
        printf("\n1.Create\n");
        printf("2.Traverse\n");
        printf("3.Push\n");
        printf("4.Pop\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d", & c);
        if (c == 5) {
            return 0;
        }
        switch (c) {
        case 1:
            create();
            break;
        case 2:
            traverse();
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
void create() {
    int che;
    do {
        struct node * p;
        p = (struct node * ) malloc(sizeof(struct node));
        printf("Input element:");
        scanf("%d", & p -> data);
        p -> link = NULL;
        p -> link = top;
        top = p;
        printf("Press 1 if more data other wise 0:");
        scanf("%d", & che);
    } while (che == 1);
    return;
}
void traverse() {
    struct node * p;
    p = top;
    if (p == NULL) {
        printf("Stack is empty");
        return;
    }
    printf("Stack traversing...\n");
    while (p != NULL) {
        printf("%d->", p -> data);
        p = p -> link;
    }
    return;
}
void push() {
    struct node * p;
    p = (struct node * ) malloc(sizeof(struct node));
    printf("Enter new element:");
    scanf("%d", & p -> data);
    p -> link = top;
    top = p;
    return;
}
void pop() {
    if (top == NULL) {
        printf("Underflow");
        return;
    }
    struct node * p;
    printf("%d is deleted", top -> data);
    top = top -> link;
    free(p);
    return;
}