#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * link;
}* start;
int main(){
    int n, i = 1;
    struct node * ptr, * c, * cur, * p;
    printf("Enter how many nodes in your linked list:");
    scanf("%d", & n);
    printf("Input node 1 data:");
    ptr = (struct node * ) malloc(sizeof(struct node));
    scanf("%d", & ptr -> data);
    start = ptr;
    for(i = 1; i < n; i++){
        printf("Enter node %d data:", i + 1);
        p = (struct node * ) malloc(sizeof(struct node));
        scanf("%d", & p -> data);
        p -> link = NULL;
        cur = start;
        while(cur -> link != NULL){
            cur = cur -> link;
        }
        cur -> link = p;
    }
    printf("Displaying linked list....\n");
    c = start;
    while(c != NULL){
        printf("->%d", c -> data);
        c = c -> link;
    }
}