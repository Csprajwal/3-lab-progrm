#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#define Max 30 
int s[Max]; 
int top = -1; 
int pop()  
{  
    if(top != -1) 
        return s[top--]; 
    else 
    { 
        printf ("Stack Underflow\n"); 
        return 0; 
    } 
} 
void push(int item)  
{  
    if(top != Max - 1) 
        s[++top] = item; 
    else 
        printf("Stack Overflow\n"); 
} 
int op(int op1,int op2,char sym)  
{  
    switch (sym) 
    { 
        case '+':return op1 + op2; 
        case '-':return op1 - op2; 
        case '*':return op1 * op2; 
        case '/':return op1 / op2; 
    } 
} 
int isdig(char symb) 
{  
    return (symb >= '0' && symb <= '9'); 
} 
void main ()  
{ 
    char symbol,postfix[30]; 
    int a,b,res,i; 
    printf("Enter postfix expression:\n"); 
    scanf("%s",postfix); 
    for(i=0;i<strlen(postfix);i++)  
    {  
        symbol=postfix[i];  
        if(isdig(symbol))  
            push(symbol-'0');  
        else 
        { 
            a=pop(); 
            b=pop();  
            res=op(b,a,symbol);  
            push(res); 
        } 
} 
printf("The result of the expression is: %d\n",pop());  
} 
