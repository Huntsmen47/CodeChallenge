#include <iostream>
#include <string>
#include <vector>
using namespace std;

int GetVal(char a, vector<char> nums, vector<int> vals)
{
    int val = 0;
  for (size_t j = 0; j < nums.size(); j++) {
    if (a == nums[j]) {
      val = vals[j];
    }
  }
  return val;
}

int Convert(int a, int b,int total, bool p)
{
    if (p)
    {
        if (a + a >= b && a != b) {
            cout << "Not Valid" << endl;
        }
        else if (a < b) {
            total = b - a;
        }
        else {
            total = a + b;
        }
    }
    else
    {
        if (a==b)
        {
            return a;
        }
        else if (a < b) {
            total = b - a;
        }
    }

  return total;
}
