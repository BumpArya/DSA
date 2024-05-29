#include <stdio.h>

int partition(int low, int high, int arr[])
{
    int pivot = arr[low];
    int j = high;
    int i = low + 1;

    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    arr[low] = arr[j];
    arr[j] = pivot;

    return j;
}

void sort(int low, int high, int arr[])
{
    int part;
    if (low < high)
    {
        part = partition(low, high, arr);
        sort(low, part - 1, arr);
        sort(part + 1, high, arr);
    }
}

void Quick(int arr[], int size)
{
    sort(0, (size - 1), arr);
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
    int arr[] = {1, 6, 4, 2, 1, 7, 10, 3};
    // int arr[] = {1, 4, 8, 10, 13};
    int size = 8;
    Quick(arr, size);
    display(arr, size);
    return 0;
}