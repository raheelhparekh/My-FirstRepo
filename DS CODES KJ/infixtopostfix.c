#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack //Declaring Stack Structure
{
    int size;
    int top;
    char *arr;
};

int stackTop(struct stack* sp){ //Function returns top of the Stack
    return sp->arr[sp->top];
}

int isEmpty(struct stack *ptr) //Function checking if stack is empty
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr) // Function Checking if Stack is full
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* ptr, char val){ //Function for pushing elements to stack
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack* ptr){ //Function to pop elements from the stack
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int precedence(char ch){ //Function for checking precedence
    if(ch == '*' || ch=='/')
        return 2;
    else if(ch == '+' || ch=='-')
        return 1;
    else
        return 0;
}

int isOperator(char ch){ //Function for checking operator
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/')
        return 1;
    else
        return 0;
}

//Infix to postfix conversion
char* infixToPostfix(char* infix){
    struct stack * sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size * sizeof(char));
    char * postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i=0; // Track infix traversal
    int j = 0; // Track postfix addition
    while (infix[i]!='\0')
    {
        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])> precedence(stackTop(sp))){
                push(sp, infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char exp[100];
    char *infix;
    printf("Enter the Expression : ");
    scanf("%s",&exp);
    infix = exp;
    printf("Postfix : %s", infixToPostfix(infix));
    return 0;
}
