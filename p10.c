#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 
    int info; 
    struct node *left; 
    struct node *right; 
}; 
typedef struct node nod; 
nod *root=NULL; 
void create(int x) 
{ 
    nod *temp,*prev,*cur; 
    temp=(nod*)malloc(sizeof(nod)); 
    temp->info=x; 
    temp->left=temp->right=NULL; 
    if(root==NULL) 
    { 
        root=temp; 
        return; 
    } 
    prev=NULL; 
    cur=root; 
    while(cur!=NULL) 
    { 
        prev=cur; 
        if(x<cur->info) 
        { 
            cur=cur->left; 
        } 
        else if(cur->info<x) 
        { 
            cur=cur->right; 
        } 
        else 
        { 
            printf("Duplicate value not allowed\n"); 
            return; 
        } 
    } 
    if(x<prev->info) 
    { 
        prev->left=temp; 
    } 
    else 
    { 
        prev->right=temp; 
    } 
} 
void preorder(nod *root) 
{ 
    if(root!=NULL) 
    { 
        printf("%d\n",root->info); 
        preorder(root->left); 
        preorder(root->right); 
    } 
} 
void postorder(nod *root) 
{ 
    if(root!=NULL) 
    { 
        postorder(root->left); 
        postorder(root->right); 
        printf("%d\n",root->info); 
    } 
} 
void inorder(nod *root) 
{ 
    if(root!=NULL) 
    { 
        inorder(root->left); 
        printf("%d\n",root->info); 
        inorder(root->right); 
    } 
} 
void main() 
{ 
    int ch,item; 
    printf("...Binary Seacrh Tree...\n"); 
    printf("MENU\n1)Create\n2)Preorder\n3)Inorder\n4)Postorder\n5)Exit\n"); 
    while(1) 
    { 
        printf("Enter your choice:\n"); 
        scanf("%d",&ch); 
        switch(ch) 
        { 
            case 1:printf("Enter the element:\n"); 
                   scanf("%d",&item); 
                   create(item); 
                   break; 
            case 2:preorder(root); 
                   break; 
            case 3:inorder(root); 
                   break; 
            case 4:postorder(root); 
                   break; 
            default:exit(0); 
        } 
    } 
} 
