#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

#include "Sort.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "List.h"

/* functions that are local to this file */
static bool checkInput(std::string buffer); //, int bufsize);
static int getCount();
static Sort * getSortType();

#define BUFFERSIZE 8

int main()
{
   int count;
   List * list;
   Sort * sort;
   std::string buffer;
   clock_t begin, end;
   double timeSpent;
 
   count = getCount();
   sort = getSortType();
   list = new List(count, sort);

   printf("\nDo you want to see the unsorted list (y or n)? ");
   std::cin >> buffer;
   printf("\n");
   if (buffer == "Y" || buffer == "y") list->printList();

   begin = clock();
   list->sort();
   end = clock();
   timeSpent = (double)(end - begin)/ CLOCKS_PER_SEC;
   printf("\nThe sort took %f seconds.\n", timeSpent);

   printf("\nDo you want to see the sorted list (y or n)? ");
   std::cin >> buffer;
   printf("\n");
   if (buffer == "Y" || buffer == "y") list->printList();
}

Sort * getSortType()
{
    bool goodInput;
    int which;
    std::string buffer;
    do
    {
        printf("\nWhich sort technique do you want to use?\n");
        printf("1. Bubblesort\n");
        printf("2. Mergesort\n");
        printf("3. Quicksort\n");
        printf("Choose 1, 2, or 3: ");
        std::cin >> buffer;
        goodInput = checkInput(buffer);
        if (goodInput) which = atoi(buffer.c_str());
        if (goodInput && (which == 1 || which == 2 || which == 3)) 
        {
            if (which == 1) return new BubbleSort(); 
            if (which == 2) return new MergeSort();
            if (which == 3) return new QuickSort();
        } 
        printf("Invalid input.\n\n");
    } while (1);
}

int getCount()
{
    int count;
    bool goodInput;
    std::string buffer;
    do 
    {
        printf("How many random numbers do you want generated for sorting?\n");
        printf("Enter a number between 1 and 500000: ");
        std::cin >> buffer;
        goodInput = checkInput(buffer); // BUFFERSIZE);
        if (goodInput) count = atoi(buffer.c_str());
        if (goodInput && (count >= 1 && count <= 500000))
        {
           return count;
        } 
        else printf("Invalid input.\n\n");
    }
    while (1);
}

//check to make sure each character in buffer up to the
//newline is a digit.  
bool checkInput(std::string buffer)
{
    int i = 0;
    int len = strlen(buffer.c_str());
    while (i <= len)
    {
        if (!isdigit(buffer[i]) && (buffer[i] != '\0')) 
           return false;  //invalid character
        else if (buffer[i] == '\0' && i == 0)
           return false;
        else if (buffer[i] == '\0')  //all is well
           return true;
        i++;
    }
    return false;
}

