#include <iostream>
// #include "..//lib_sorting_lmistie/libsorting.h"

// Гибрид сортировки слиянием.
// Разбиваем массив на подмассивы фиксированной длины
// и сортируем каждый подмассив любой устойчивой сортировкой.
// После чего объединяем отсортированные
// подмассивы модифицированной сортировкой слиянием.

// Лучшее время: O(n log n)
// Среднее время: O(n log n)
// Худшее время: O(n log n)
// Дополнительная память: O(n)
// Стабильность: да

// временный костыль
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

// cортировки слиянием
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
            while (left < mid && right < end) // слияние
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
            while (left < mid) // если в правой части закончились элементы
            {
                temp[k] = arr[left];
                ++left;
                ++k;
            }
            while (right < end) //  если в левой части закончились элементы
            {
                temp[k] = arr[right];
                ++right;
                ++k;
            }
            for (int i = 0; i < size; i++) // копируем временный массив в исходный
            {
                arr[i] = temp[i];
            }
        }
    }
}

// заправшиваем размер массива
// просим ввести элементы массива
// выводим введенный массив
// вызываем функцию сортировки
// выводим отсортированный массив
int main()
{
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    int arr[size];
    std::cout << "Введите элементы массива: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << "Начальный массив: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    timsort(arr, size);
    std::cout << "\nОтсортированный массив: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}