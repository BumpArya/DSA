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

void display(struct Node *Head)
{
    struct Node *ptr = Head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = (ptr->next);
    }
    printf("\n");
}

// Insertion

struct Node *insertHead(struct Node **Head, int D)
{
    struct Node *New = create(New, D);
    New->data = D;
    New->next = *Head;

    *Head = New;
    return New;
}

void link(struct Node *prev, int D)
{
    struct Node *New = create(New, D);
    New->next = prev->next;
    prev->next = New;
}

void insert(struct Node *Head, int index, int D)
{
    struct Node *ptr = Head;

    for (int i = 1; i < index; i++)
    {
        ptr = (ptr->next);
    }
    link(ptr, D);
}

void insertTail(struct Node *Head, int D)
{
    struct Node *New = create(New, D);
    struct Node *ptr = Head;
    while ((ptr->next) != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = New;
    New->next = NULL;
}

// Deletion

void deleteHead(struct Node **Head)
{
    struct Node *ptr = *Head;
    *Head = (*Head)->next;
    free(ptr);
    ptr = NULL;
}

void delete(struct Node *Head, int index)
{
    struct Node *p = Head, *q = Head->next;
    for (int i = 0; i < (index - 1); i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    q = NULL;
}

void erase(struct Node *Head, int Data)
{
    struct Node *p = Head, *q = Head->next;
    while ((q->data) != Data)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    q = NULL;
}

void deleteTail(struct Node *Head)
{
    struct Node *p = Head, *q = Head->next;
    while ((q->next) != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    q = NULL;
}

int main(int argc, char const *argv[])
{
    struct Node *Head = create(Head, 10);
    struct Node *N1 = create(N1, 11);
    struct Node *N2 = create(N2, 12);
    struct Node *N4 = create(N4, 14);
    struct Node *Tail = create(Tail, 15);

    Head->next = N1;
    N1->next = N2;
    N2->next = N4;
    N4->next = Tail;

    display(Head);

    // Insert

    insertHead(&Head, 9);
    display(Head);

    insert(Head, 4, 13);
    display(Head);

    insertTail(Head, 16);
    display(Head);

    link(N2, 17);
    display(Head);

    // Delete

    deleteHead(&Head);
    display(Head);

    delete (Head, 3);
    display(Head);

    deleteTail(Head);
    display(Head);

    erase(Head, 14);
    display(Head);

    return 0;
}
