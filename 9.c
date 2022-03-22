#include <stdio.h>
#include<malloc.h>

struct node{
    struct node * prev;
    struct node * next;
    int data;
};
struct node * start = NULL;
void traverse();
int main(){
    int n, i, item;
    struct node * ptr, * temp;
    printf("Enter how many nodes:");
    scanf("%d", & n);
    for(i = 0; i < n; i++){
        printf("Enter value:");
        scanf("%d", & item);
        ptr = (struct node * ) malloc(sizeof(struct node));
        ptr -> data = item;
        if(start == NULL){
            ptr -> next = NULL;
            ptr -> prev = NULL;
            start = ptr;
        }else{
            temp = start;
            while (temp -> next != NULL) {
                temp = temp -> next;
            }
            temp -> next = ptr;
            ptr -> prev = temp;
            ptr -> next = NULL;
        }
    }
    printf("Printing values forward direction....\n");
    ptr = start;
    while(ptr != NULL){
        printf("%d->", ptr -> data);
        ptr = ptr -> next;
    }
    ptr = start;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    printf("\nPrinting values backward direction....\n");
    while(ptr != NULL){
        printf("%d->", ptr -> data);
        ptr = ptr -> prev;
    }
    return 0;
}