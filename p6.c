#include<stdio.h> 
#include<stdlib.h> 
struct node  
{ 
    int info; 
    struct node *link; 
}; 
typedef struct node *NODE; 
NODE getnode()  
{  
    NODE x; 
    x=(NODE)malloc(sizeof(struct node)); 
    if(x==NULL) 
    { 
        printf ("Out of memory\n"); 
        exit (0); 
    } 
    return x; 
} 
void freenode(NODE x)  
{  
    free (x); 
} 
NODE insert_front(int item,NODE first)  
{ 
    NODE temp; 
    temp=getnode(); 
    temp->info=item; 
    temp->link=first; 
    return temp; 
} 
 
NODE delete_front(NODE first) 
{ 
    NODE temp; 
    if(first==NULL) 
    { 
        printf("List is empty\n"); 
        return first; 
    } 
    temp=first; 
    temp=temp->link; 
    printf("The deleted item is %d \n",first->info); 
    freenode(first); 
    return temp; 
} 
NODE insert_rear(int item, NODE first) 
{ 
    NODE temp,cur; 
    temp=getnode(); 
    temp->info=item; 
    temp->link=NULL; 
    if(first==NULL) 
        return temp; 
    cur=first; 
    while(cur->link!=0) 
    { 
        cur=cur->link; 
    } 
    cur->link=temp; 
    return first; 
} 
NODE delete_rear(NODE first)  
{  
    NODE cur=first,prev=NULL; 
    if(cur==NULL) 
 { 
     printf("List is empty\n"); 
     return first; 
 } 
 while(cur->link!=NULL) 
 { 
     prev=cur; 
     cur=cur->link; 
 } 
 printf("The deleted item is %d\n",cur->info); 
 freenode (cur); 
 prev->link=NULL; 
 return first; 
} 
void display(NODE first)  
{ 
    NODE temp=first; 
    if(first==NULL) 
 { 
     printf ("NO NODES IN THE LIST!!\n"); 
     return; 
 } 
 else 
 { 
     while(temp!=NULL) 
     { 
         printf("%d\t",temp->info); 
         temp=temp->link; 
     } 
     printf("\n"); 
 } 
} 
void main() 
{ 
    NODE first=NULL; 
    int choice,item; 
    printf("MENU\n1)Insert Front\n2)Insert Rear\n3)Delete Front\n4)Delete Rear\n5)Display\n"); 
 while(1) 
 { 
     printf("Enter your choice:\n"); 
     scanf("%d",&choice); 
     switch(choice) 
  { 
      case 1:printf("Enter the item:\n"); 
             scanf ("%d",&item); 
             first=insert_front(item, first); 
             break; 
      case 2:printf("Enter the item:\n"); 
             scanf("%d",&item); 
             first=insert_rear(item, first); 
             break; 
      case 3:first=delete_front(first); 
             break; 
      case 4:first=delete_rear(first); 
             break; 
      case 5:display(first); 
             break; 
      default:exit(0); 
  } 
 } 
}
