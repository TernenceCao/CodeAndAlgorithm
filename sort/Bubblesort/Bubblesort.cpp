#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

// Define function prototype
void SimpleBubbleSort(int array[], int n);
void BubbleSort(int array[], int n);
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

      // Use BubbleSort Algorithm to sort

      // SimpleBubbleSort(&array[0], arr_num);   // SimpleBubbleSort function
      BubbleSort(&array[0], arr_num);         // BubbleSort function
      std::cout << "The result of BubbleSort: " << std::endl;

      display(&array[0], arr_num);
      return 0;
}

// Implement function
void SimpleBubbleSort(int array[], int n)
{     
      int swap;
      for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n -i - 1; j++){
            // The comparsion is performed regardless of whether the sequence is sorted or not
                  if(array[j] > array[j + 1]){      
                        swap = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = swap;
                  }
                  // display(&array[0], n);
            }
            std::cout << "The result of " << i + 1 << "th BubbleSort: " << std::endl;
            display(&array[0], n);
      }
      return;
}


void BubbleSort(int array[], int n)
{     // use flag to judge if sequence is sorted yet.
      int swap;
      for(int i = 0; i < n - 1; i++){
            bool flag = false;
            for(int j = 0; j < n - i - 1; j++){
                  if(array[j] > array[j + 1]){      
                        swap = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = swap;
                        flag = true;      // There has been a data exchange, sequence is not sorted yet.
                  }
            }
            if(!flag)   break;
            std::cout << "The result of " << i + 1 << "th BubbleSort: " << std::endl;
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