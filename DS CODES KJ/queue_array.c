// RAHEEL PAREKH 16010121133
#include <stdio.h>
#include <stdlib.h>

void enqueue();
void dequeue();
void display();
int n = 100;
int queue_array[100];
int back = -1;
int front = -1;

int main()
{
    int choice;

    printf("1.Insert element to queue \n");
    printf("2.Remove element from queue \n");
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
    int val;
    if (back == n - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == -1)
            /*If queue is initially empty */
            front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &val);
        back = back + 1;
        queue_array[back] = val;
    }
}

void dequeue()
{
    if (front == -1 || front > back)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Element dequeued from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= back; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}