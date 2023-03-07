// ABC081B - Shift only
#include <iostream>  // cin, cout, endl
#include <string>    // getline
#include <sstream>   // istringstream
using namespace std;

int main()
{
	int n;
	cin >> n;
  	int a[n]={0},x=0;
  	cin.ignore();
	string line,word;
	getline(cin, line);
	istringstream iss(line);
	for (int i=0;i < n;i++){
      iss >> word;
      a[i]=stoi(word);
    }
  	while(1){
  		for (int i = 0; i < n; i++){
      		if( a[i]%2==0 ){
        		a[i]=a[i]/2;
      		}
      		else{
  	            cout << x<< endl;
                return 0;
            }
  		}
      	x++;
  	}
}