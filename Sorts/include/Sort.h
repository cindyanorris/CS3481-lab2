class Sort
{
   public:
      //the keyword virtual here allows polymorphism
      //the call to sort will be dynamically bound to the appropriate method
      virtual void sort(int * list, int length);

};


