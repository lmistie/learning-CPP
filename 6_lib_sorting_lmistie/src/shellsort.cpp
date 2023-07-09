#include "libsorting.h"

void shellsort(int *arr, int size)
{
    int step = size / 2;
    while (step > 0)
    {
        for (int i = 0; i < (size - step); i++)
        {
            int j = i;
            while (j >= 0 && arr[j] > arr[j + step])
            {
                int temp = arr[j];
                arr[j] = arr[j + step];
                arr[j + step] = temp;
            }
        }
        step = step / 2;
    }
}