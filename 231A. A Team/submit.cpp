#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <numeric>
#include <climits>
#include <cstring>
using namespace std;
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore();

  int counter = 0;
  for (int i = 0; i < n; i++)
  {
    string nums;
    getline(cin, nums);

    stringstream ss(nums);

    int number;
    vector<int> numbers;

    while (ss >> number)
    {
      numbers.push_back(number);
    }

    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
      sum += numbers[i];
    }

    if (sum >= 2)
    {
      counter++;
    }
  }

  cout << counter;
  return 0;
}
