//Raheel H Parekh
#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}
void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
        
    }
}

struct node * search(struct node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

int main(){
     
    // Constructing the root node - Using Function 
    struct node  *p = createNode(5);               
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Inorder Traversal:");
    inOrder(p);
    printf("\n");
    int num;
    while(num)
    {
        printf("\nEnter number to search for\t");
        scanf("%d",&num);
    
        struct node* n = search(p, num);
        if(n!=NULL)
        {
        printf("Found: %d", n->data);
        
        break;
        }
        else
        {
            printf("Element not found");
        }
    }
    return 0;
}