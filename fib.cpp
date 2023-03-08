#include <iostream>
using namespace std;
int fib(int);     // declare Fib() function prototype
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
      return 0;
}

int fib(int n)    // define fib function
{
      ++count;
      if(n == 0)  return 0;   // if n is equal to zero, return 0
      else if(n == 1 || n == 2)     //if n = 1 or n = 2, return 1
            return 1;
      else
            return (fib(n - 1) + fib(n - 2));   // otherwise, return fib(n - 1) + fib(n - 2)

}