#include <stdio.h>

void Insertion(int arr[], int size)
{
    int key, j;
    for (int i = 1; i < (size); i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    Insertion(arr, size);
    display(arr, size);
    return 0;
}
