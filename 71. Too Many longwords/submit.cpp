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

int main()
{

  int n;
  cin >> n;

  while (n--)
  {
    string word = "";
    cin >> word;
    if (word.length() <= 10)
    {
      cout << word << "\n";
    }
    else
    {
      string start = "";
      start += word[0];
      string num = to_string(word.length() - 2);
      start += num;
      start += word[word.length() - 1];
      cout << start << "\n";
    }
  }

  return 0;
}