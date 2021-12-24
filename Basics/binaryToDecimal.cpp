#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int binary;
  cout << "enter binary number" << endl;
  cin >> binary;

  int decimal = 0;
  int count = 0;
  while(binary != 0){
    int digit = binary % 10;
    if (digit == 1){
      decimal += (digit) * pow(2,count++);
    }
    binary /= 10;
  }
  cout << "decimal:" << decimal;
}

