#include "QuickSort.h"

void
QuickSort(int* arr, int p, int r)
{
    if (p >= r)
        return;
    int pivot = arr[p];
    int i = p - 1;
    int j = r + 1;
    while (i <= j) {
        do {
            i++;
        } while (i < r && arr[i] < pivot);
        do {
            j--;
        } while (j > p && arr[j] > pivot);
        if (i < j)
            swap(arr[i], arr[j]);
        else
            break;
    }
    QuickSort(arr, p, j);
    QuickSort(arr, j + 1, r);
}

void
swap(int& x, int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
}