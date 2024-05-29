#include <stdio.h>
#include <stdlib.h>
#include "09_QueueArray.c"

int size;

void create_adj_mat(int arr[][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = 0;
        }
    }
}

void add_edge(int arr[][size], int i, int j)
{
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void print_adj_mat(int adj_mat[][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", adj_mat[i][j]);
        }
        printf("\n");
    }
}

void BFS(int adj_mat[][size], int s)
{
    int visited[size];
    for (int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    visited[s] = 1;
    struct queue *Q = create(size);
    enqueue(Q, s);

    while (!isEmpty(Q))
    {
        int u = dequeue(Q);
        printf("%d ", u);
        for (int i = 0; i < size; i++)
        {
            if (adj_mat[u][i] && !visited[i])
            {
                visited[i] = 1;
                enqueue(Q, i);
            }
        }
    }
    printf("\n");
}

int main()
{
    size = 7;
    int adj_mat[size][size];
    create_adj_mat(adj_mat);
    add_edge(adj_mat, 0, 1);
    add_edge(adj_mat, 0, 2);
    add_edge(adj_mat, 0, 3);
    add_edge(adj_mat, 1, 2);
    add_edge(adj_mat, 2, 3);
    add_edge(adj_mat, 2, 4);
    add_edge(adj_mat, 3, 4);
    add_edge(adj_mat, 4, 5);
    add_edge(adj_mat, 4, 6);

    BFS(adj_mat, 4);

    return 0;
}
