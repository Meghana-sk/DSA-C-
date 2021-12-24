#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int binary = 0;
  int i = 0;
  while (n != 0){ // 101
    int digit = n & 1; // 1
    n = n >> 1; // 010
    binary += (pow(10,i) * digit); // 
    i++;
  }
  cout << binary << endl;
}