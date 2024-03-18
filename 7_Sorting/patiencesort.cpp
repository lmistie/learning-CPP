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
void patiencesort(std::vector<int>& arr)
{
    std::vector<std::stack<int>> piles;
    for (int num : arr)
    {
        int j = 0;
        while (j < piles.size() && !piles[j].empty() && num > piles[j].top())
            ++j;
        if (j == piles.size())
            piles.emplace_back();
        piles[j].push(num);
    }
    int index = 0;
    for (auto& pile : piles)
    {
        while (!pile.empty())
        {
            arr[index] = pile.top();
            pile.pop();
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

    std::vector<int> arr(size);
    std::cout << "Введите элементы массива: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Начальный массив: ";
    for (int num : arr)
    {
        std::cout << num << " ";
    }

    patiencesort(arr);

    std::cout << "\nОтсортированный массив: ";
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}