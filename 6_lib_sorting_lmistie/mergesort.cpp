#include "libsorting.h"

void mergesort(int *arr, int size)
{
    if (size <= 1)
        return;
    int mid = size / 2;
    mergesort(arr, mid);
    mergesort(arr + mid, size - mid);
    int *temp = new int[size];
    int i = 0;
    int j = mid;
    int k = 0;
    while (i < mid && j < size)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            ++i;
        }
        else
        {
            temp[k] = arr[j];
            ++j;
        }
        ++k;
    }
    while (i < mid)
    {
        temp[k] = arr[i];
        ++i;
        ++k;
    }
    while (j < size)
    {
        temp[k] = arr[j];
        ++j;
        ++k;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
    delete[] temp;
}