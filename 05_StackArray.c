#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

struct stack *create(int s)
{
    struct stack *S = (struct stack *)malloc(sizeof(struct stack));
    S->arr = (int *)malloc(s * sizeof(int));
    S->top = -1;
    S->size = s;

    return S;
}

int isFull(struct stack *s)
{
    if (s->top == ((s->size) - 1))
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *s, char data)
{
    if (isFull(s))
    {
        printf("Stack overflow\n");
        return;
    }

    s->top++;
    s->arr[s->top] = data;
}

int pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack underflow\n");
        return -1;
    }

    int data = s->arr[s->top];
    s->top--;

    return data;
}

int peek(struct stack *s, int key)
{
    int ind = ((s->top) - key) + 1;
    if (ind >= 0)
    {
        int data = s->arr[ind];
        return data;
    }
    return -1;
}

// int main()
// {
//     struct stack *s = create(5);
//     push(s, 1);
//     push(s, 2);
//     push(s, 5);
//     push(s, 4);
//     push(s, 7);
//     push(s, 3);

//     pop(s);
//     printf("%d ", peek(s, 1));

//     return 0;
// }
