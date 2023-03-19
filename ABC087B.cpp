// ABC087B - Coins
#include <iostream> // cin, cout, endl
#include <string>   // getline
#include <sstream>  // istringstream
using namespace std;

int main()
{
  int a, b, c, x, cnt, y;
  cin >> a >> b >> c >> x;
  cnt = 0;
  for (int i = 0; i <= a; i++)
  {
    for (int j = 0; j <= b; j++)
    {
      for (int k = 0; k <= c; k++)
      {
        if (x == ((i * 500) + (j * 100) + (k * 50)))
        {
          cnt++;
        }
      }
    }
  }
  cout << cnt;
}