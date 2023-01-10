// RAHEEL PAREKH 16010121133
#include<stdio.h>   
#include<stdlib.h>  
struct Node   
{  
    int data;   
    struct Node *next;  
};  
struct Node *front;  
struct Node *back;   
void enqueue();  
void dequeue();  
void display();  
void main ()  
{  
    int choice;
    
        printf("\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.EXIT \n");
        while (1)
    {
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
}  
void enqueue()  
{  
    struct Node *ptr;  
    int item;   
      
    ptr = (struct Node *) malloc (sizeof(struct Node));  
    if(ptr == NULL)  
    {  
        printf("\n QUEUE OVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nInsert the element in queue : ");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            back = ptr;   
            front -> next = NULL;  
            back -> next = NULL;  
        }  
        else   
        {  
            back -> next = ptr;  
            back = ptr;  
            back->next = NULL;  
        }  
    }  
}     
void dequeue ()  
{  
    struct Node *ptr;  
    if(front == NULL)  
    {  
        printf("\nQueue Underflow \n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);  
    }  
}  
void display()  
{  
    struct Node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nQueue is empty \n");  
    }  
    else  
    {   printf("\nQueue is : \n");  
        while(ptr != NULL)   
        {  
            printf("%d\t",ptr -> data,"\n");  
            ptr = ptr -> next;  
        }  
    }  
}  