// Stack - Array based implementation.
// Creating a text editor to perform undo redo operations
// NOTE: Redo operation will be given the choice to user only after he first uses the Undo Operation
#include <stdio.h>
#define MAX_SIZE 101
int stacky[MAX_SIZE];
int top = -1;

// Push operation to insert an element on top of stack.
void Push(int value)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Error: stack overflow\n");
        return;
    }
    stacky[++top] = value;
}

// Pop operation to remove an element from top of stack.
void Pop()
{
    if (top == -1)
    {
        printf("Error: No element to pop\n");
        return;
    }
    top--;
}

// Top operation to return element at top of stack.
int Top()
{
    return stacky[top];
}
// This will print all the elements in the stack at any stage.
void Print()
{
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++)
        printf("%d ", stacky[i]);
    printf("\n");
}

int main()
{
    // calling Print() after each push or pop to see the state of stack.
    int choice, id, r;
    printf("\nText Editor:Adding Roll Numbers\n");
    printf("1. Add Roll NO\n2. Undo/Redo\n3. Print\n4. Exit\n");
    do
    {
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        if(choice>4)
        {
            printf("Please Enter Valid choice");
        }

        if (choice == 1)
        {
            printf("Enter Roll NO: ");
            scanf("%d", &id);
            Push(id);
            printf("Added to the stack");
        }
        else if (choice == 2)
        {
            int m = Top();// stored the top element which is going to be undo
            Pop();//Undo performed where the topmost element was removed from the stack
            printf("Undo successfully executed!\n");
            printf("Press 1 to Redo or any other number to continue:");//Giving user the choice if he wishes to Redo
            scanf("%d", &r);
            if (r == 1)
            {
                Push(m);//pushing the element if user wishes to Redo
                printf("Redo successfully executed!\n");
            }
        }
        else if (choice == 3)
        {
            if(top==-1)
            {
                printf("Stack Underflow\n");
            }
            Print();
        }
         if(choice==4)
        {
            printf("Thankyou,Exiting");
        }
        
    } while (choice != 4);
}
