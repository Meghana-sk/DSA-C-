/*
------------------------------------
Print
1234
 234
  34
   4
------------------------------------
*/
#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "enter n" << endl;
  cin >> n;
  for(int i = 1; i <= n;i++){
    for (int j = 1;j < i;j++){
      cout << " ";
    }
    for (int j = i;j <= n;j++){
      cout << j;
    }
    cout << endl;
  }
}