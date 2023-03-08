#include <iostream>
using namespace std;

int main()
{
      char str_1[40];
      char str_2[40];
      char str_3[80];
      int count, s_record;

      cout << "string Str_1's content: ";
      cin >> str_1;
      cout << "string Str_2's content: ";
      cin >> str_2;

      s_record = 0;     // use s_record to computer str_3's elements

      for(count = 0; str_1[count] != '\0'; count++, s_record++)
            str_3[s_record] = str_1[count];

      for(count = 0; str_2[count] != '\0'; count++, s_record++)
            str_3[s_record] = str_2[count];

      str_3[s_record] = '\0';
      cout << "string Str_3's content: " << str_3 << endl;

      return 0;
}