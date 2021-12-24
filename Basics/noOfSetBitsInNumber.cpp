#include <iostream>
using namespace std;

int noOfSetBits(int n){
  int count = 0;
  while(n != 0){
    int digit = n & 1;
    if (digit == 1) {
      count++;
    }
    n = n >> 1;
  }
  return count;
}

int sum(int a,int b) {
  return noOfSetBits(a) + noOfSetBits(b);
}
int main(){
  int a,b;
  cout << "enter two numbers" << endl;
  cin >> a >> b;
  cout << "no of set bits:" << sum(a,b); 
}