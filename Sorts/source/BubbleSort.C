#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"


//use bubbleSort to sort a list of integers
void BubbleSort::sort(int * list, int length)
{
    int i, j;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                list[j] = list[j + 1] ^ list[j];
                list[j + 1] = list[j + 1] ^ list[j];
                list[j] = list[j + 1] ^ list[j];
            }
        }
    }
}

