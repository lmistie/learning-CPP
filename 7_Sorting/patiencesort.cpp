#include <iostream>
#include <vector>
#include <stack>

// Раскидываем элементы массива по стопкам,
// после чего строим двоичную кучу из стопок.
// Позволяет также вычислить длину наибольшей
// возрастающей подпоследовательности данного массива.

// Лучшее время: O(n log n)
// Среднее время: O(n log n)
// Худшее время: O(n log n)
// Дополнительная память: O(n)
// Стабильность: нет

// терпеливая сортировка
void patiencesort(int *arr, int size)
{
    std::vector<std::stack<int>> piles;
    for (int i = 0; i < size; ++i)
    {
        int j = 0;
        while (j < piles.size() && !piles[j].empty() && arr[i] > piles[j].top()) // Добавлена проверка на пустоту стека
            ++j;
        if (j == piles.size())
            piles.push_back(std::stack<int>());
        piles[j].push(arr[i]);
    }
    int index = 0;
    for (int i = 0; i < piles.size(); ++i)
    {
        while (!piles[i].empty())
        {
            arr[index] = piles[i].top();
            piles[i].pop();
            ++index;
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

    if (size <= 0)
    {
        std::cout << "Размер массива должен быть положительным числом." << std::endl;
        return 1;
    }

    int *arr = new int[size];
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
    patiencesort(arr, size);
    std::cout << "\nОтсортированный массив: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    delete[] arr; // Освобождение выделенной памяти
    return 0;
}