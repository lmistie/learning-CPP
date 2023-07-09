#include "libsorting.h"

void quicksort(int *arr, int first, int last)
{
    int i = first;
    int j = last;
    int x = arr[(first + last) / 2];
    do
    {
        while (arr[i] < x)
            ++i;
        while (arr[j] > x)
            --j;
        if (i <= j)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            ++i;
        }
    } while (i <= j);
    if (i < last)
    {
        quicksort(arr, i, last);
    }
}