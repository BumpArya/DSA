#include <stdio.h>

void Bubble(int arr[], int size)
{
    int isSwapped; // Making Bubble sort adaptive
    for (int i = 0; i < (size - 1); i++)
    {
        isSwapped = 0;
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwapped = 1;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (!isSwapped)
        {
            return;
        }
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
    Bubble(arr, size);
    display(arr, size);
    return 0;
}
