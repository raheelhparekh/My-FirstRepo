#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
void main ()  
{  
      
    printf("Enter the number of elements in the stack :");   
    scanf("%d",&n);  
    printf("Implementing Stack operations using array");  
  
printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("Choose one from the below options\n");  
        printf("\nPRESS 1.Push\nPRESS 2.Pop\nPRESS 3.Show\nPRESS 4.Exit\n");  
        printf("Enter your choice :\t");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}   
  
void push ()  
{  
    int val;      
    if (top == n-1 )   
    printf("\n STACK Overflow/Full\n");   
    else   
    {  
        printf("Enter the value:");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("STACK Underflow/Empty\n");  
    else  
    top = top -1;   
}   
void show()  
{  
    printf("Your Stack");
    for (i=top;i>=0;i--)  
    {  
        printf("\n%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty\n");  
    }  
}  