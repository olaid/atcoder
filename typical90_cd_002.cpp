// 002 - Encyclopedia of Parentheses（★3）
#include <iostream>
#include <vector>
#include <algorithm>

void print(const std::vector<char>& v)
{
  std::for_each(v.begin(), v.end(), [](char x) {
    std::cout << x;
  });
  std::cout << std::endl;
}

int main ()
{
  
    int n,flg=0;
	std::cin >> n; 
    if ( n % 2 != 0) return 0;
    if ( n < 0) return 0;
    std::vector<char> char_n;
    std::vector<char> stak_r;
  for (int i=0 ; i< n ; i++){   
    if( i < n / 2){
      char_n.push_back('(');
    }
    else {
      char_n.push_back(')');
    }
  }

  do {
    flg = 0;
    for( char &x:char_n ){
      if( x == '(' ) stak_r.push_back(x);
      else if ( x == ')') {
        if( stak_r.empty() ){
           flg = 1;
           break;
        }
        stak_r.pop_back();
      }
    }
    if( flg == 0  ){
     
      std::string str(char_n.begin(), char_n.end());
      std::cout << str << std::endl;
    }
    
  } while (std::next_permutation(char_n.begin(), char_n.end()));
  
}