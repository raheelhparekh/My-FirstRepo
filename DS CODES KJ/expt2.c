#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void insert();
void delete();
void search();
// declaring a struct
struct node
{
    int n;
    struct node *next;
};
struct node *start = NULL;

int main()
{
    int choice;
    // while loop for user choice will run until user wishes to exit
    while (1)
    {
        printf("\nMenu");
        printf("\n1.Create");
        printf("\n2.Display");
        printf("\n3.Insert");
        printf("\n4.Search");
        printf("\n5.Delete");
        printf("\n6.Exit");
        printf("\nEnter an opton from the menu: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            insert();
            break;

        case 4:
            search();
            break;

        case 5:
            delete();
            break;

        case 6:
            exit(0);
            break;

        default:
            create();
            break;
        }
    }

    return 0;
}
// definition of create function
void create()
{
    struct node *temp, *ptr;

    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nData value for the node is: ");
    scanf("%d", &temp->n);
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
// definition of display function
void display()
{
    struct node *ptr;

    if (start == NULL)
    {
        printf("\nList is empty \n");
        return;
    }
    else
    {
        ptr = start;
        printf("\nThe list elements are:  ");

        while (ptr != NULL)
        {
            printf("%d \t", ptr->n);
            ptr = ptr->next;
        }
    }
}
// definition of insert function
void insert()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data value for the node: \t");
    scanf("%d", &temp->n);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}
// definition of delete function
void delete()
{
    int i, pos;
    struct node *temp, *ptr;
    printf("\nEnter the position of the node to be deleted: ");
    scanf("%d", &pos);

    if (pos == 0)
    {
        ptr = start;
        start = start->next;
        printf("\nThe deleted element is: %d ", ptr->n);
        free(ptr);
    }
    else
    {
        ptr = start;
        for (i = 0; i < pos; i++)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        printf("\nThe deleted element is: %d ", ptr->n);
        free(ptr);
    }
}
// definition of search function

void search()
{
    struct node *ptr;
    int item, i = 0, flag = 0;
    ptr = start;

    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search: ");
        scanf("%d", &item);

        while (ptr != NULL)
        {
            if (ptr->n == item)
            {
                printf("item found at location %d \n", i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }

        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}