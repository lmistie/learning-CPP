#include "libsorting.h"

void patiencesort(int *arr, int size)
{
    std::vector<std::stack<int> > piles;
    for (int i = 0; i < size; ++i)
    {
        int j = 0;
        while (j < piles.size() && arr[i] > piles[j].top())
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