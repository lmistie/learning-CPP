#include <iostream>

// На каждом шаге алгоритма мы выбираем один из элементов входных данных
// и вставляем его на нужную позицию в уже отсортированной части массива
// до тех пор, пока весь набор входных данных не будет отсортирован.

// сортировка всавками

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
    insertion_sort(arr, size);
    std::cout << "\nОтсортированный массив: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}