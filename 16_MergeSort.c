#include <stdio.h>

void merge(int arr[], int mid, int low, int high)
{
    int i = low;
    int j = mid + 1;
    int temp_size = high - low + 1;
    int temp_arr[temp_size];
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp_arr[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp_arr[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= mid)
    {
        temp_arr[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp_arr[k] = arr[j];
        k++;
        j++;
    }
    for (int i = 0; i < temp_size; i++)
    {
        arr[low + i] = temp_arr[i];
    }
}

void sort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (high + low) / 2;
        sort(arr, low, mid);
        sort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

void Merge(int arr[], int size)
{
    sort(arr, 0, (size - 1));
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
    int arr[] = {1, 6, 4, 2, 8, 1, 10, 3};
    // int arr[] = {1, 4, 8, 10, 13};
    int size = 8;
    Merge(arr, size);
    display(arr, size);
    return 0;
}