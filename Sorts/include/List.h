class List
{
   //protected means that the derived classes have access
   private:
      int * list;
      int length;
      Sort * sortStrategy;
   public:
      List(int length, Sort * sortStrategy);
      void sort();
      void printList(); 
};


