#include <stdio.h>
#include<malloc.h>

struct bst{
    int info;
    struct bst * left;
    struct bst * right;
};
struct bst * search(struct bst * root, int);
int main(){
    struct bst * q, * p, * root, * k;
    int n, i, item, key;
    printf("Enter how many nodes: ");
    scanf("%d", & n);
    for(i = 0; i < n; i++){
        p = (struct bst * ) malloc(sizeof(struct bst));
        printf("enter element [%d]:", i + 1);
        scanf("%d", & item);
        p -> info = item;
        p -> left = NULL;
        p -> right = NULL;
        if(i == 0){
            root = p;
        }
        else{
            q = root;
            while(1){
                if(p -> info > q -> info){
                    if(q -> right == NULL){
                        q -> right = p;
                        break;
                    }else{
                        q = q -> right;
                    }
                }else{
                    if(q -> left == NULL){
                        q -> left = p;
                        break;
                    }else{
                        q = q -> left;
                    }
                }
            }
        }
    }
    printf("\nenter an element for search:");
    scanf("%d", & key);
    k = search(root, key);
    if(k != NULL){
        printf("%d is present in this bst", key);
    }else{
        printf("%d is not present in this bst", key);
    }
}
struct bst * search(struct bst * root, int key) {
    if(root == NULL){
        return root;
    }else if(key == root -> info){
        return root;
    }else if(key < root -> info){
        return search(root -> left, key);
    }
    else{
        return search(root -> right, key);
    }
}