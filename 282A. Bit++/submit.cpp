#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <numeric>
#include <climits>
#include <cstring>
using namespace std;

bool isAddition(string s)
{
  if (s[0] == '-')
  {
    return false;
  }
  else if (s[0] == '+')
  {
    return true;
  }
  else if (s[s.length() - 1] == '+')
  {
    return true;
  }
  else if (s[s.length() - 1] == '-')
  {
    return false;
  }

  return false;
}

int main()
{
  int n = 0;
  cin >> n;
  cin.ignore();
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    string input;
    getline(cin, input);
    if (isAddition(input))
    {
      sum++;
    }
    else
    {
      sum--;
    }
  }
  cout << sum;

  return 0;
}