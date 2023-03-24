#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

// Define function prototype
void InsertSort(int array[], int n);
void display(int array[], int n);

int main()
{
      // Initialize the sequence to be sorted
      int arr_num;
      std::cout << "Please input number of Array to sort: ";
      time_t t;
      const int num = 10;
      srand((unsigned) time(&t));
      while((rand() % num != 0) && (rand() > 0))
            arr_num = rand() % num;
      std::cout << arr_num << std::endl;
      int array[arr_num];     //{1, 2, 3, 4, 5, 6, 9};
      for(int i = 0; i < arr_num; i++){
            array[i] = rand() % (num * num);
      }
      std::cout << "Initialize the sequence: " << std::endl;
      display(&array[0], arr_num);

      // Use InsertSort Algorithm to sort

      InsertSort(&array[0], arr_num);         // InsertSort function
      std::cout << "The result of InsertSort: " << std::endl;

      display(&array[0], arr_num);
      return 0;
}

// sort sequence in ascending order
void InsertSort(int array[], int n)
{     
      /*
            [0, 1, ..., i - 1] is sorted sequence.
            [i, i + 1, ...] is unsorted sequence.
      */ 
      int swap;
      for(int i = 1; i < n; ++i){
            for(int j = 0; j < i; ++j){
                  if(array[j] > array[i]){ 
                        // transfer data when insert new number into sorted sequence
                        swap = array[i];
                        for(int k = i; k > j; --k){
                              array[k] = array[k - 1];
                        }
                        array[j] = swap;
                  }
            }

            std::cout << "The result of " << i << "th InsertSort: ";
            display(&array[0], n);
      }
      return;
}

void display(int array[], int n)
{
      for(int k = 0; k < n; k++){
            std::cout << array[k] << " ";
      }
      std::cout << std::endl;
}