#include <iostream>
using namespace std;

int main(){
  int a = 5;
  cout << a <<  endl;//5
  if (true){
    int a = 10;
    cout << a << endl; //10
  }
  cout << a << endl;//5

  int c = 8;
  cout << "from outside " << c << endl;
  if (true){
    cout << "from inside if block " << c << endl;
  }

  int d = 99;
  cout << "d: " << endl;
  if (true){
    int e = 54;
    cout << "from if block d:" << d << ",c:" << c << endl;
    // d is accessible here because it is declared outside if
  }
  // cout << "from outside if block, e:" << e << endl;  //you will get compilation error saying e is not declared in this scope

}