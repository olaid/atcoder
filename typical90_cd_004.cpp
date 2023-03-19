// 004 - Cross Sum（★2）
#include <iostream> // cin, cout, endl
#include <string>   // getline
#include <sstream>  // istringstream
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  long a[h][w] = {0};
  long bh[h] = {0}, bw[w] = {0};
  cin.ignore();
  string line, word;
  for (int j = 0; j < h; j++)
  {
    getline(cin, line);
    istringstream iss(line);
    for (int i = 0; i < w; i++)
    {
      iss >> word;
      a[j][i] = stoi(word);
    }
  }

  for (int j = 0; j < h; j++)
  {
    for (int i = 0; i < w; i++)
    {
      bh[j] += a[j][i];
    }
  }
  for (int j = 0; j < w; j++)
  {
    for (int i = 0; i < h; i++)
    {
      bw[j] += a[i][j];
    }
  }

  for (int j = 0; j < h; j++)
  {
    for (int i = 0; i < w; i++)
    {
      cout << bh[j] + bw[i] - a[j][i];
      if (i != w - 1)
        cout << " ";
    }
    cout << endl;
  }
}