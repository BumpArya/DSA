#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node *next;
};

struct adj_list
{
    int n_vertices;
    struct node **ptr;
};

struct node *create_node(int v)
{
    struct node *n = malloc(sizeof(struct node));
    n->vertex = v;
    n->next = NULL;

    return n;
}

struct adj_list *create_adj_list(int size)
{
    struct adj_list *a = (struct adj_list *)malloc(sizeof(struct adj_list));
    a->n_vertices = size;
    a->ptr = (struct node **)malloc(size * sizeof(struct node *));

    return a;
}

void print_adj_list(struct adj_list *g)
{
    int size = g->n_vertices;
    for (int i = 0; i < size; i++)
    {
        printf("Vertex %d: ", i);
        struct node *n = g->ptr[i];
        while (n != NULL)
        {
            printf("%d -> ", n->vertex);
            n = n->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    struct adj_list *a = create_adj_list(4);

    a->ptr[0] = create_node(1);
    a->ptr[0]->next = create_node(2);
    a->ptr[0]->next->next = create_node(3);

    a->ptr[1] = create_node(0);
    a->ptr[1]->next = create_node(2);

    a->ptr[2] = create_node(0);
    a->ptr[2]->next = create_node(1);

    a->ptr[3] = create_node(0);

    print_adj_list(a);

    return 0;
}
