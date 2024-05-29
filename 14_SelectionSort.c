#include <stdio.h>

void Selection(int arr[], int size)
{
    int min, minInd;
    for (int i = 0; i < size - 1; i++)
    {
        min = arr[i];
        minInd = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minInd = j;
            }
        }
        arr[minInd] = arr[i];
        arr[i] = min;
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 6, 4, 2, 8, 7, 10, 3};
    // int arr[] = {1, 4, 8, 10, 13};
    int size = 8;
    Selection(arr, size);
    display(arr, size);
    return 0;
}
