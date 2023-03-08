// ABC049C - 白昼夢
#include <iostream>  // cin, cout, endl
#include <string>    // getline
#include <sstream>   // istringstream
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string t;
	cin >> t;
    reverse(t.begin(), t.end());
    int cnt=0;
    while (1){
      if( t.compare (0, 7, "remaerd") == 0 ){
        t=t.substr(7);
      }
      else if ( t.compare (0, 5, "maerd") == 0  ){
        t=t.substr(5);
      }
      else if( t.compare (0, 5, "esare") == 0  ){
        t=t.substr(5);
      }
      else if( t.compare (0, 6, "resare") == 0  ){
        t=t.substr(6);
      }
      else{
        cout << "NO";
        return 0;
      }
      if(t==""){
        cout << "YES";
        return 0;
      }
    }
}