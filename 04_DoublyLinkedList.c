#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *create(struct Node *New, int D)
{
    New = (struct Node *)malloc(sizeof(struct Node));
    New->data = D;
    New->next = NULL;
    New->prev = NULL;

    return New;
}

// Traversal

void display(struct Node *Head, int rev)
{
    struct Node *ptr = Head;
    switch (rev)
    {
    case 0:
        while (ptr != NULL)
        {
            printf("%d ", (ptr->data));
            ptr = (ptr->next);
        }
        break;

    case 1:
        while ((ptr->next) != NULL)
        {
            ptr = (ptr->next);
        }
        while (ptr != NULL)
        {
            printf("%d ", (ptr->data));
            ptr = (ptr->prev);
        }
        break;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    struct Node *Head = create(Head, 10);
    struct Node *N1 = create(N1, 11);
    struct Node *N2 = create(N2, 12);
    struct Node *N3 = create(N3, 13);
    struct Node *Tail = create(Tail, 14);

    Head->next = N1;

    N1->prev = Head;
    N1->next = N2;

    N2->prev = N1;
    N2->next = N3;

    N3->prev = N2;
    N3->next = Tail;

    Tail->prev = N3;

    display(Head, 1);
    display(Head, 0);

    return 0;
}
