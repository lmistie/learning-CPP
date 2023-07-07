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
    std::vector<std::stack<int> > piles;
    for (int i = 0; i < size; ++i)
    {
        int j = 0;
        while (j < piles.size() && arr[i] > piles[j].top()) // .size() - количество элементов в векторе .top() - возвращает значение верхнего элемента стека
            ++j;

        if (j == piles.size())
            piles.push_back(std::stack<int>()); // .push_back() - добавляет элемент в конец вектора

        piles[j].push(arr[i]); // .push() - добавляет элемент в стек
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
    int *arr = new int[size]; // new - выделяет память для массива
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
    delete[] arr;

    return 0;
}