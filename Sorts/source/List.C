#include <iostream>
#include <stdlib.h>
#include "Sort.h"
#include "List.h"

List::List(int length, Sort * sort)
{
   int i;
   this->length = length;
   this->list = new int[this->length];
   this->sortStrategy = sort;
   unsigned int iseed = (unsigned int)time(NULL);
   srand (iseed);
   for (i = 0; i < length; i++)
      list[i] = rand() % 10000;
}

void List::sort()
{
   //the call to sort is dynamically bound to the appropriate sort method
   sortStrategy->sort(list, length);
}
   
void List::printList()
{
   int i;
   for (i = 0; i < length; i++) std::cout << list[i] << " ";
   std::cout << '\n';
}
