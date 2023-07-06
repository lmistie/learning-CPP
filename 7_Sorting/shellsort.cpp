#include <iostream>

// Является модификацией сортировки вставками,
// сортируем между собой элементы, стоящие на кратных нашему шагу местах.

// сортировка Шелла
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
        step = step / 2; // уменьшаем шаг на 2 чтобы было деление на 2
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
    shellsort(arr, size);
    std::cout << "\nОтсортированный массив: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}