#include <iostream>
using namespace std;
#include <cmath>

int main(){
  int n;
  cout << "enter number" << endl;
  cin >> n;
  int binary=0;
  int i=0;
  while(n != 0){ // 5 101
    binary += (n & 1 ? 0 : 1) * pow(10,i++);
    n = n >> 1; 
  }
  // binary = (binary | 1);
  cout << "complement" << binary;

}