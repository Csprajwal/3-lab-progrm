#include <stdio.h> 
#include <stdlib.h> 
#define Max 3 
int s[Max],top= -1; 
void push() 
{ 
    if(top==Max-1) 
    { 
        printf("Stack Overflow\n"); 
        return; 
    } 
    int x; 
    printf("Enter the element:\n"); 
    scanf("%d",&x); 
    top=top+1; 
    s[top]=x; 
} 
void pop() 
{ 
    if(top==-1) 
    { 
        printf("Stack Underflow\n"); 
        return; 
    } 
    printf("Popped element is %d\n",s[top]); 
    top=top-1; 
} 
void display() 
{ 
    int i; 
    if(top==-1) 
    { 
        printf("Stack is Empty\n"); 
        return; 
    } 
    printf("The elements of stack are:\n"); 
    for(i=0;i<=top;i++) 
    { 
        printf("%d\n",s[i]); 
    } 
} 
void main() 
{ 
    int ch,x; 
    while(1) 
    { 
        printf("1)Push\t2)Pop\t3)Display\n"); 
        printf("Enter your choice:\n"); 
        scanf("%d",&ch); 
        switch(ch) 
        { 
            case 1:push(); 
                   break; 
            case 2:pop(); 
                   break; 
            case 3:display(); 
                   break; 
default:exit(0); 
} 
} 
} 
