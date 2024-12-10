#include<stdio.h> 
#include<stdlib.h> 
#define Max 5  
int f = -1,r = -1,q[Max]; 
void insert() 
{  
    int item; 
    if(r==Max - 1) 
        printf("OVERFLOW!!!\n"); 
    else 
 { 
     if(f==-1) 
         f = 0; 
     printf("Enter the item to be inserted:\n"); 
     scanf ("%d",&item); 
     q[++r] = item; 
 } 
} 
void delete()  
{ 
    if(f==-1) 
        printf("UNDERFLOW!!!\n"); 
    else if(f>r) 
 { 
     f=r=-1; 
 } 
    else 
    { 
        printf ("Item deleted=%d\n",q[f++]); 
    } 
} 
void display()  
{ 
    int i; 
    if(f==-1) 
        printf("UNDERFLOW!!!\n"); 
 else 
 { 
     printf("The elements are: \n"); 
     for(i=f;i<=r;i++) 
     printf("%d\n",q[i]); 
 } 
} 
void main ()  
{ 
    int ch; 
    printf ("MENU\n1)Insert\n2)Delete\n3)Display\n4)Exit\n"); 
    while(1) 
    { 
        printf ("Enter your choice:\n"); 
        scanf ("%d",&ch); 
        switch(ch) 
        { 
            case 1:insert(); 
             break; 
      case 2:delete(); 
                 break; 
                 case 3:display(); 
                            break; 
                 default:exit(0); 
        } 
    } 
} 
