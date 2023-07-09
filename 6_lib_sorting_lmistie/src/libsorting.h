#ifndef LIBSORTING_H
#define LIBSORTING_H

#include <vector>
#include <algorithm>
#include <stack>

void heapsort(int *arr, int size);
void bubble_sort(int *arr, int size);
void insertion_sort(int *arr, int size);
void shellsort(int *arr, int size);
void quicksort(int *arr, int first, int last);
void selectionsort(int *arr, int size);
void mergesort(int *arr, int size);
void timsort(int *arr, int size);
void patiencesort(int *arr, int size);
void smooth_sort(std::vector<int> &lst);

#endif