#include <stdio.h>
#include "Number.h"

int main(void)
{
   Number number(10);
   printf("%d\n", number.getNumber());
   number.setNumber(13);
   printf("%d\n", number.getNumber());
}
