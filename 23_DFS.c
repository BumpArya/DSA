#include <stdio.h>
#include <stdlib.h>
#include "05_StackArray.c"

int size = 7;
int adj_mat[7][7];
int visited[7];

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

void DFS(int i)
{
    printf("%d ", i);
    visited[i] = 1;
    for (int j = 0; j < size; j++)
    {
        if (adj_mat[i][j] == 1 && !visited[j])
        {
            DFS(j);
        }
    }
}

int main()
{
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

    for (int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    DFS(4);

    return 0;
}
