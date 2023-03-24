#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

// Define function prototype
void SelectiveSort(int array[], int n);
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

      // Use SelectiveSort Algorithm to sort

      SelectiveSort(&array[0], arr_num);         // SelcetiveSort function
      std::cout << "The result of SelectiveSort: " << std::endl;

      display(&array[0], arr_num);
      return 0;
}

// Implement funciton
void SelectiveSort(int array[], int n)
{
      for(int i = 0; i < n - 1; ++i){
            int swap;
            for(int j = i + 1; j < n; ++j){
                  if(array[i] > array[j]){
                        swap = array[i];
                        array[i] = array[j];
                        array[j] = swap;
                  }
            }
            std::cout << "The result of " << i + 1 << "th SelectiveSort: " << std::endl;
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