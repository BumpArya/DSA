#include <stdio.h>

void Count(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int temp_arr[max + 1];
    for (int i = 0; i <= max; i++)
    {
        temp_arr[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        temp_arr[arr[i]]++;
    }

    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        if (temp_arr[i] != 0)
        {
            while (temp_arr[i] > 0)
            {
                arr[j] = i;
                j++;
                temp_arr[i]--;
            }
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
    int arr[] = {1, 6, 4, 2, 8, 1, 10, 3};
    // int arr[] = {1, 4, 8, 10, 13};
    int size = 8;
    Count(arr, size);
    display(arr, size);
    return 0;

    // 2m + 3n + 1
}