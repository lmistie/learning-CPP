#include <iostream>
#include "../6_lib_sorting_lmistie/src/libsorting.h"

int main() {
    int arr[10] = {1, 5, 2, 4, 3, 6, 9, 8, 7, 0};
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;    
}