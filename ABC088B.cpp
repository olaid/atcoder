// ABC088B - Card Game for Two
#include <iostream> // cin, cout, endl
#include <string>   // getline
#include <sstream>  // istringstream
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n] = {0}, x = 0, y = 0, turn = 0, *max;
  cin.ignore();
  string line, word;
  getline(cin, line);
  istringstream iss(line);
  for (int i = 0; i < n; i++)
  {
    iss >> word;
    a[i] = stoi(word);
  }
  for (int j = 0; j < n; j++)
  {
    max = &a[j];
    for (int k = 0; k < n; k++)
    {
      if (*max < a[k])
        max = &a[k];
    }
    if (turn == 0)
    {
      x += *max;
      turn = 1;
    }
    else
    {
      y += *max;
      turn = 0;
    }
    *max = 0;
  }
  cout << x - y;
}