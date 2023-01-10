#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deleteMax(struct Node *head)
{
    struct Node *ptr = head;
    int max = 0, maxVal = ptr->data, i = 0;
    while (ptr != NULL)
    {
        if (ptr->data > maxVal)
        {
            max = i;
            maxVal = ptr->data;
        }
        ptr = ptr->next;
        i++;
    }
    ptr = head;
    i = 0;
    while (i < max - 1)
    {
        ptr = ptr->next;
        i++;
    }
    ptr->next = ptr->next->next;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);
    head = deleteMax(head);

    printf("Linked list after deletion\n");
    linkedListTraversal(head);
    return 0;
}
