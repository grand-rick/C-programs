#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint64_t VALUE;
typedef struct node {
    VALUE val;
    struct node *next;
}
node;

node *create (VALUE value);
void find (node *head, VALUE x);
node *insert (node *head, VALUE value);
void destroy (node *head);
void print_list(node *head);

int main(void)
{
    //Creating a linked list head
    node *head = create(6);

    head = insert(head, 7);

    head = insert(head, 5);

    head = insert(head, 9);

    //Checking if a value in a linked list exists
    find(head, 4);

    //Printing the values in the list
    print_list(head);

    //Freeing the list
    destroy(head);
    return 0;
}

//Function to print values in list
void print_list(node *head)
{
    if (head == NULL)
    {
        return;
    }
    print_list(head->next);
    printf("%lu\n", head->val);
}

//Function to create a node
node *create(VALUE value)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        printf("Insufficient memory\n");
        return n;
    }
    n->val = value;
    n->next = NULL;

    return n;
}

//Function to find a value in a node
void find(node *head, VALUE x)
{
    while (head != NULL)
    {
        if (head->val == x)
        {
            printf("Found\n");
            return;
        }
        node *tmp = head->next;
        head = tmp;
    }
    printf("Not found\n");
    return;
}

//Function to insert a new node to the head
node *insert(node *head, VALUE value)
{
    node *copy = malloc(sizeof(node));
    copy = head;
    node *n = malloc(sizeof(node));

    if (n == NULL)
    {
        printf("Insufficient space to insert\n");
        return n;
    }

    n->val = value;
    n->next = NULL;

    if (head->next == NULL)
    {
        copy->next = NULL;
        n->next = copy;
        head = n;
        return head;
    }
    else
    {
        n->next = copy;
        head = n;
        return head;
    }

    return head;
}

//Function to free list
void destroy(node *head)
{
    if (head == NULL)
    {
        return;
    }

    destroy(head->next);
    free(head);
}
