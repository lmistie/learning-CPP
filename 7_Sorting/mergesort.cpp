#include <iostream>

// Алгоритм состоит в разделении массива пополам, сортировке половин и их слиянии.

// Сортировка слиянием
void mergesort(int *arr, int size)
{
    if (size <= 1) // если размер массива меньше или равен 1, то он уже отсортирован
        return;
    int mid = size / 2;
    mergesort(arr, mid); // рекурсивный вызов функции сортировки для левой части массива
    mergesort(arr + mid, size - mid); // рекурсивный вызов функции сортировки для правой части массива
    int *temp = new int[size]; // выделяем память под временный массив
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
    delete[] temp; // освобождаем память, выделенную под временный массив
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
    mergesort(arr, size);
    std::cout << "\nОтсортированный массив: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}