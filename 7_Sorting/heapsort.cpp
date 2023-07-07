#include <iostream>

// Строим из массива кучу, по очереди извлекаем минимум кучи.

// сортировка кучей
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
            heapsort(arr, size); // рекурсивно вызываем функцию для поддерева
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
    heapsort(arr, size);
    std::cout << "\nОтсортированный массив: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}