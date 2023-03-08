#include <iostream>
using namespace std;

/*
      Using the idea of dynamic programming to improve the calculation of the 
      Fibonacci sequence can reduce the number of recurisve calls.
*/

int fib(int);     // declare Fib() function prototype
int output[100]{};
static int count = 0;

int main()
{
      int i, n;
      cout << "Please input that which number you want to calculate: " << endl;
      cin >> n;

      for(i = 0; i <= n; i++){      // calculate the first n Fib numbers
            cout << "fib(" << i << ")" << fib(i) <<endl;
      }
      cout << "count: " << count <<endl;

      for(i = 0; i <= n; i++)
            cout << output[i] << " ";
      cout << endl;
      return 0;
}

int fib(int n)    // define fib function
{
      int tmp = output[n];
      if(tmp == 0){
            ++count;
            if(n == 0){  // if n is equal to zero, return 0
                  output[n] = 0;
                  return 0;
            }
            else if(n == 1 || n == 2){     //if n = 1 or n = 2, return 1
                  output[n] = 1;
                  return 1;
            }
            else{
                  output[n] = fib(n - 1) + fib(n - 2);
                  return output[n];   // otherwise, return fib(n - 1) + fib(n - 2)
            }
      }
      return tmp;
}