#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

int main() {
  string fullname;
  cin>>fullname;
  reverse(fullname.begin(),fullname.end());
  cout<<fullname;
  
  
  
  return 0;
}
