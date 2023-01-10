//Raheel H Parekh 133
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int isEmpty(struct queue *q)
{
    if (q->rear == q->front)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("This Queue is Full\n");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("The Queue is Empty \n");
    }
    else
    {
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}
void main()
{
    int ver, graph[100], rel[100][100], visited[100] = {0}, node;

    printf("Enter total no. of vertices for Undirected graph:\t");
    scanf("%d", &ver);

    // For taking input of element present at vertex for(int i = 0; i < ver; i++)

    for (int i = 0; i < ver; i++)
    {
        printf("\nEnter element of vertex %d:\t", i + 1);
        scanf("%d", &graph[i]);
    }

    // For taking input of Relation matrix for UNdirected graph

    printf("\nEnter 1 if relation exists for below elements & 0 if it doesn't:\n");
    for (int i = 0; i < ver; i++)
    {
        for (int j = i; j < ver; j++)
        {
            printf("%d & %d:\t", graph[i], graph[j]);
            scanf("%d", &rel[i][j]);
            rel[j][i] = rel[i][j];
        }
        printf("\n");
    }

    // intialization of empty queue struct queue q; struct queue q;
    q.size = 200;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    int i = 0;
    printf("%d", i);
    visited[i] = 1;
    enqueue(&q, i);
    while (!isEmpty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; i < ver; j++)
        {
            if (rel[node][j] == 1 && visited[j] == 0)
            {
                printf("%d", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
}
