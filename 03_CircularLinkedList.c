#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *create(struct Node *New, int D)
{
    New = (struct Node *)malloc(sizeof(struct Node));
    New->data = D;
    New->next = NULL;

    return New;
}

// Traversal

void display(struct Node *Head)
{
    struct Node *ptr = Head;
    do
    {
        printf("%d ", ptr->data);
        ptr = (ptr->next);
    } while (ptr != Head);
    printf("\n");
}

// Insert

void insert(struct Node **Head, int Data)
{
    struct Node *New = create(New, Data), *ptr = *Head;

    while ((ptr->next) != *Head)
    {
        ptr = (ptr->next);
    }
    ptr->next = New;
    New->next = *Head;
    *Head = New;
}

int main(int argc, char const *argv[])
{
    struct Node *Head = create(Head, 10);
    struct Node *N1 = create(N1, 11);
    struct Node *N2 = create(N2, 12);
    struct Node *N3 = create(N3, 14);
    struct Node *Tail = create(Tail, 15);

    Head->next = N1;
    N1->next = N2;
    N2->next = N3;
    N3->next = Tail;
    Tail->next = Head;

    display(Head);

    insert(&Head, 9);
    display(Head);
}