// ABC086C - Traveling
#include <iostream>  // cin, cout, endl
#include <string>    // getline
#include <sstream>   // istringstream
using namespace std;
 
int main()
{
	int n;
	cin >> n;
  	int a[n][3]={0};
  	cin.ignore();
	string line,word;
    for (int j=0;j < n;j++){
      getline(cin, line);
      istringstream iss(line);
      for (int i=0;i < 3;i++){
        iss >> word;
        a[j][i]=stoi(word);
      }
    }
  
    if ( a[0][1] + a[0][2] > a[0][0] ||
      !(
        a[0][1] + a[0][2] <= a[0][0] &&
        (a[0][1] + a[0][2] - a[0][0] ) % 2 == 0
      )
    ){
        cout << "No";
        return 0;
    }
    for (int j=1;j < n;j++){
      if ( abs(a[j][1]-a[j-1][1] - a[j-1][2]+a[j][2]) > a[j][0]- a[j-1][0] ||
          !(
            abs(a[j][1]-a[j-1][1] - a[j-1][2]+a[j][2]) <= a[j][0]- a[j-1][0] &&
           (abs(a[j][1]-a[j-1][1] - a[j-1][2]+a[j][2]) - (a[j][0]- a[j-1][0]) ) % 2 == 0
          )
        ){
        cout << "No";
        return 0;
      }
    }
    cout << "Yes";
}