#include <stdio.h>
#include <stdlib.h>

struct ele
{
    char data;
    struct ele *next;
};

struct stack
{
    struct ele *top;
};

int isFull(struct ele *n);

struct ele *create_ele(char d)
{
    struct ele *n = (struct ele *)malloc(sizeof(struct ele));
    if (isFull(n))
    {
        return n;
    }
    n->data = d;
    n->next = NULL;

    return n;
}

struct stack *create_stack()
{
    struct stack *n = (struct stack *)malloc(sizeof(struct stack));
    n->top = NULL;

    return n;
}

int isEmpty(struct stack *s)
{
    if (s->top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct ele *n)
{
    if (n == NULL)
    {
        printf("Stack Overflow");
        return 1;
    }
    return 0;
}

void push(struct stack *s, char d)
{
    if (isEmpty(s))
    {
        s->top = create_ele(d);
        return;
    }
    struct ele *n = create_ele(d);
    if (isFull(n))
    {
        return;
    }
    n->next = s->top;
    s->top = n;
}

char pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack underflow");
        return -1;
    }

    struct ele *ptr = s->top;
    int data = ptr->data;
    s->top = ptr->next;
    free(ptr);

    return data;
}

char peek(struct stack *s, int key)
{
    struct ele *ptr = s->top;
    for (int i = 1; i < key && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        return -1;
    }

    return ptr->data;
}

// int main()
// {
//     struct stack *s = create_stack();
//     push(s, 'a');
//     push(s, 'b');
//     push(s, 'c');
//     push(s, 'd');
//     push(s, 'e');
//     push(s, 'f');
//     pop(s);
//     printf("%c ", peek(s, 1));

//     return 0;
// }