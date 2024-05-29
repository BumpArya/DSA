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
    q->f = -1;
    q->r = -1;

    return q;
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        // printf("Queue is Empty");
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == ((q->size) - 1))
    {
        // printf("Queue is Full");
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

    q->r++;
    q->arr[q->r] = d;
}

int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        return -1;
    }
    q->f++;
    int d = q->arr[q->f];

    return d;
}

// int main()
// {
//     struct queue *q = create(8);
//     enqueue(q, 7);
//     enqueue(q, 11);
//     enqueue(q, 18);
//     enqueue(q, 2);
//     enqueue(q, 5);
//     enqueue(q, 8);

//     printf("%d\n", q->f);
//     dequeue(q);
//     printf("%d\n", q->f);
//     printf("%d\n", q->r);
//     return 0;
// }
