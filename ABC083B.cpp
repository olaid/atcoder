// ABC083B - Some Sums
#include <iostream> // cin, cout, endl
#include <string>   // getline
#include <sstream>  // istringstream
using namespace std;

int main()
{
  int a, b, n, nx, ny, cnt;
  cin >> n >> a >> b;
  cnt = 0;
  for (int i = 1; i <= n; i++)
  {
    nx = i;
    ny = 0;
    while (nx > 0)
    {
      ny += nx % 10;
      nx /= 10;
    }
    if (a <= ny && b >= ny)
      cnt += i;
  }
  cout << cnt;
}