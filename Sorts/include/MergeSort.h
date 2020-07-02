
//MergeSort inherits from Sort
//public members of Sort become public members of MergeSort
class MergeSort : public Sort
{
   private:
      void merge(int numbers[], int temp[], int left, int mid, int right);
      void mSort(int numbers[], int temp[], int left, int right);
   public:
      void sort(int * list, int length);
};


