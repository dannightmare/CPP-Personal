#include "QuickSort/QuickSort.h"
#include <iostream>

int
main(void)
{
    int arr[5] = { 1, 3, 5, 2, 4 };

    QuickSort(arr, 0, 4);

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}