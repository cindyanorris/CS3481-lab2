#include "Animal.h"
#include "Dog.h"

int main()
{
   Animal * a;
   a = new Animal();

   a->makeSound();
   a->move();
   a = new Dog();
   a->makeSound();
   a->move();
}
