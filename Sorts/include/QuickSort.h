
//QuickSort inherits from Sort
//public members of Sort become public members of QuickSort
class QuickSort : public Sort
{
   private:
      void swap(int * x, int * y);
      int choose_pivot(int i,int j );
      void quicksort(int * list, int m, int n);
   public:
      void sort(int * list, int length);
};


