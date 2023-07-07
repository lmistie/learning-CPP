#include <iostream>
#include <vector>
#include <algorithm>

// Модификация сортировки кучей. Вместо двоичной кучи используем K-ую кучу Леонардо.

// Лучшее время: O(n)
// Среднее время: O(n log n)
// Худшее время: O(n log n)
// Дополнительная память: O(1)
// Стабильность: нет

// Вычисление чисел Леонардо, не превышающих заданное значение
std::vector<int> leonardo_numbers(int hi)
{
    std::vector<int> numbers;
    int a = 1, b = 1;
    while (a <= hi)
    {
        numbers.push_back(a);
        int temp = b;
        b = a + b + 1;
        a = temp;
    }
    return numbers;
}

// Восстановление кучи после слияния куч или удаления корня
void restore_heap(std::vector<int>& lst, int i, std::vector<int>& heap, std::vector<int>& leo_nums)
{
    // Модифицированная сортировка вставками для корней куч
    int current = heap.size() - 1;
    int k = heap[current];

    while (current > 0)
    {
        int j = i - leo_nums[k];
        if (lst[j] > lst[i] && (k < 2 || (lst[j] > lst[i - 1] && lst[j] > lst[i - 2])))
        {
            std::swap(lst[i], lst[j]);
            i = j;
            current--;
            k = heap[current];
        }
        else
        {
            break;
        }
    }

    // Просейка
    while (k >= 2)
    {
        int t_r, k_r, t_l, k_l;
        t_r = i - 1;
        k_r = k - 2;
        t_l = t_r - leo_nums[k_r];
        k_l = k - 1;

        if (lst[i] < lst[t_r] || lst[i] < lst[t_l])
        {
            if (lst[t_r] > lst[t_l])
            {
                std::swap(lst[i], lst[t_r]);
                i = t_r;
                k = k_r;
            }
            else
            {
                std::swap(lst[i], lst[t_l]);
                i = t_l;
                k = k_l;
            }
        }
        else
        {
            break;
        }
    }
}

// Функция плавной сортировки
void smooth_sort(std::vector<int>& lst)
{
    int n = lst.size();

    // Создание чисел Леонардо
    std::vector<int> leo_nums = leonardo_numbers(n);

    // Создание кучи в виде списка деревьев Леонардо
    std::vector<int> heap;

    for (int i = 0; i < n; i++)
    {
        if (heap.size() >= 2 && heap[heap.size() - 2] == heap[heap.size() - 1] + 1)
        {
            heap.pop_back();
            heap[heap.size() - 1]++;
        }
        else
        {
            if (heap.size() >= 1 && heap[heap.size() - 1] == 1)
            {
                heap.push_back(0);
            }
            else
            {
                heap.push_back(1);
            }
        }
        restore_heap(lst, i, heap, leo_nums);
    }

    // Разборка кучи
    for (int i = n - 1; i >= 0; i--)
    {
        if (heap[heap.size() - 1] < 2)
        {
            heap.pop_back();
        }
        else
        {
            int k = heap[heap.size() - 1];
            heap.pop_back();

            int t_r, k_r, t_l, k_l;
            t_r = i;
            k_r = k;
            t_l = t_r - leo_nums[k_r];
            k_l = k - 1;

            heap.push_back(k_l);
            restore_heap(lst, t_l, heap, leo_nums);

            heap.push_back(k_r);
            restore_heap(lst, t_r, heap, leo_nums);
        }
    }

    // Преобразование кучи Леонардо обратно в массив
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        while (j > 0 && lst[j] < lst[j - 1])
        {
            std::swap(lst[j], lst[j - 1]);
            j--;
        }
    }
}

// заправшиваем размер массива
// просим ввести элементы массива
// выводим введенный массив
// вызываем функцию сортировки
// выводим отсортированный массив
int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;
    std::vector<int> lst(n);
    std::cout << "Введите элементы массива: \n";
    for (int i = 0; i < n; i++) {
        std::cin >> lst[i];
    }
    std::cout << "\nНачальный массив: ";
    for (int i = 0; i < lst.size(); i++) {
        std::cout << lst[i] << " ";
    }
    std::cout << std::endl;
    smooth_sort(lst);
    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < lst.size(); i++) {
        std::cout << lst[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}