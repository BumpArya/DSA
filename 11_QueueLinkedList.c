#include <stdio.h>
#include <stdlib.h>

struct item
{
    int data;
    struct item *next;
};

struct queue
{
    struct item *f;
    struct item *r;
};

struct item *create_item(int d)
{
    struct item *n = (struct item *)malloc(sizeof(struct item));
    if (n == NULL)
    {
        return n;
    }

    n->data = d;
    n->next = NULL;

    return n;
}

struct queue *create_queue()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->f = NULL;
    q->r = NULL;

    return q;
}

int isEmpty(struct queue *q)
{
    if (q->f == NULL && q->r == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int d)
{
    struct item *n = create_item(d);
    if (n == NULL)
    {
        printf("Queue is full");
        return;
    }

    if (isEmpty(q))
    {
        q->r = n;
        q->f = n;
    }
    else
    {
        (q->r)->next = n;
        q->r = n;
    }
}

int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty");
        return -1;
    }
    struct item *ptr = q->f;
    q->f = (q->f)->next;
    int data = ptr->data;
    free(ptr);

    if (q->f == NULL)
    {
        q->r = NULL;
    }

    return data;
}

int main()
{
    struct queue *Q = create_queue();
    enqueue(Q, 7);
    enqueue(Q, 8);
    enqueue(Q, 9);
    enqueue(Q, 10);
    struct item *ptr = Q->f;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", dequeue(Q));
    printf("%d ", dequeue(Q));
    printf("%d ", dequeue(Q));
    printf("%d ", dequeue(Q));
    dequeue(Q);

    return 0;
}
