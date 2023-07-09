#include "libsorting.h"

void heapsort(int *arr, int size)
{
    for (int i = size / 2 - 1; i >= 0; --i)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;
        if (left < size && arr[left] < arr[largest])
            largest = left;
        if (right < size && arr[right] < arr[largest])
            largest = right;
        if (largest != i)
        {
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;
            heapsort(arr, size);
        }
    }
}