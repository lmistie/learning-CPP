#include "libsorting.h"

void insertion_sort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i - 1];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void timsort(int *arr, int size)
{
    int minrun = 32;
    int runs = 0;
    int start = 0;
    int end = 0;
    int *temp = new int[size];
    while (start < size)
    {
        end = std::min(start + minrun, size);
        insertion_sort(arr + start, end - start);
        start = end;
        runs++;
    }
    for (int run = minrun; run < size; run *= 2)
    {
        for (int i = 0; i < size; i += 2 * run) 
        {
            int mid = i + run;
            int end = std::min(i + 2 * run, size);
            int left = i;
            int right = mid;
            int k = left;
            while (left < mid && right < end)
            {
                if (arr[left] <= arr[right])
                {
                    temp[k] = arr[left];
                    ++left;
                }
                else{
                    temp[k] = arr[right];
                    ++right;
                }
                ++k;
            }
            while (left < mid)
            {
                temp[k] = arr[left];
                ++left;
                ++k;
            }
            while (right < end)
            {
                temp[k] = arr[right];
                ++right;
                ++k;
            }
            for (int i = 0; i < size; i++)
            {
                arr[i] = temp[i];
            }
        }
    }
}