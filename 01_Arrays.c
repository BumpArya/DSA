#include <stdio.h>
#include <stdlib.h>

// creating array ADT

struct Array
{
    int total_size;
    int used_size;
    int *ptr;
};

void create(struct Array *arr, int t, int u)
{
    arr->total_size = t;
    arr->used_size = u;
    arr->ptr = (int *)malloc(t * sizeof(int));
}

// Traversal

void display(struct Array *arr)
{
    for (int i = 0; i < arr->used_size; i++)
    {
        printf("%d ", (arr->ptr)[i]);
    }
    printf("\n");
}

void set(struct Array *arr)
{
    int d;
    for (int i = 0; i < arr->used_size; i++)
    {
        printf("Enter data at index %d: ", i);
        scanf("%d", &d);
        (arr->ptr)[i] = d;
    }
};

void release(struct Array *arr)
{
    // Free memory
    free(arr->ptr);
    arr->ptr = NULL;
    arr->total_size = 0;
    arr->used_size = 0;
}

// Insertion

void insert(struct Array *arr, int index, int data)
{
    int size = arr->used_size, d;
    // shifting elements
    for (int i = (size - 1); i >= index; i--)
    {
        d = (arr->ptr)[i];
        (arr->ptr)[i + 1] = d;
    }
    // inserting element at the index
    (arr->ptr)[index] = data;
    arr->used_size = size + 1;
};

// Deletion

void delete(struct Array *arr, int index)
{
    int size = arr->used_size, d;
    // shifting elements
    for (int i = index; i < (size - 1); i++)
    {
        d = (arr->ptr)[i + 1];
        (arr->ptr)[i] = d;
    }
    // inserting element at the index
    arr->used_size = size - 1;
}

// Searching

int linear(struct Array *arr, int data)
{
    int size = arr->used_size, d;
    for (int i = 0; i < size; i++)
    {
        d = (arr->ptr)[i];
        if (d == data)
        {
            return i;
        }
    }
    return -1;
}

int binary(struct Array *arr, int data)
{
    int high = (arr->used_size) - 1, low = 0, mid, mid_ele;
    // iterative approach
    while (high >= low)
    {
        mid = (high + low) / 2;
        mid_ele = (arr->ptr)[mid];

        if (data > mid_ele)
        {
            low = mid + 1;
        }
        else if (data < mid_ele)
        {
            high = mid - 1;
        }
        else if (data == mid_ele)
        {
            return mid;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    struct Array marks;

    create(&marks, 10, 6);

    set(&marks);
    display(&marks);

    insert(&marks, 2, 3);
    display(&marks);

    delete (&marks, 2);
    display(&marks);

    int find, index;

    find = 5, index = linear(&marks, find);
    printf("element %d found at index %d\n", find, index);

    // Works only for sorted arrays
    find = 3;
    index = binary(&marks, find);
    printf("element %d found at index %d\n", find, index);

    release(&marks);

    return 0;
}
