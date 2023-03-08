#include <iostream>
#include <math.h>
using namespace std;
static int count = 0;
bool is_prime(int n)
{
      int i = 2;
      while(i <= n / i ){     // use i * i to reduce the compared times.
            ++count;
            if(n % i == 0)    return false;
            ++i;
      }
      return true;
}

int main()
{
      cout << "Following numbers are all prime: " << endl;
      for(int i = 2; i <= 100; i++){
            if(is_prime(i))   // cout << i << " is prime." << endl;
                  cout << i << " ";
      }
      cout << endl;
      // else  cout << n << " is not prime." << endl;
      cout << count << endl;
      return 0;
}
