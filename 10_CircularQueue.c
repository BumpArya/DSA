#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f;
    int r;
    int *arr;
    int size;
};

struct queue *create(int s)
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->arr = (int *)malloc(s * sizeof(int));
    q->size = s;
    q->f = 0;
    q->r = 0;

    return q;
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        printf("Queue is Empty\n");
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if ((((q->r) + 1) % (q->size)) == q->f)
    {
        printf("Queue is Full\n");
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int d)
{
    if (isFull(q))
    {
        return;
    }
    q->r = (q->r + 1) % q->size;
    q->arr[q->r] = d;
}

int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        return -1;
    }
    q->f = (q->f + 1) % q->size;
    int d = q->arr[q->f];

    return d;
}

int main()
{
    struct queue *q = create(8);
    enqueue(q, 7);
    enqueue(q, 16);
    enqueue(q, 12);
    enqueue(q, 8);
    enqueue(q, 7);
    enqueue(q, 11);
    enqueue(q, 22);
    printf("dequeue: %d\n", dequeue(q));
    enqueue(q, 1);

    printf("%d\n", q->f);
    printf("%d\n", q->r);
    return 0;
}
