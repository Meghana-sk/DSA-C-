/*
------------------------------------
Print
   1
  22
 333
4444
------------------------------------
*/
#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "enter n" << endl;
  cin >> n;
  for(int i = 1; i <= n;i++){
    for(int j = 1;j <= n - i;j++) {
      cout << "-";
    }
    for (int j = n - i;j < n;j++){
      cout << i;
    }
    cout << endl;
  }
}