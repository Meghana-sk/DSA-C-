#include <iostream>
using namespace std;

int main(){
  int a=10,b=1;
  if (++a) {
    cout << b << endl; 
  } else {
    cout << ++b << endl;
  }


  int c = 1, d = 2;
  if(c-- > 0 && ++d > 2) {
    cout << "inside if" << endl;
  } else {
    cout << "inside else" << endl;
  }
  cout << "c:" << c << " d:" << d << endl;

  int e = 1, f = 2;
    if(e-- > 0 || ++f > 2) {
      cout << "inside if" << endl;
    } else {
      cout << "inside else" << endl;
    }
  cout << "e:" << e << " f:" << f << endl;
  int p = 3;
  cout << (25 * (++p)) << endl;

  int l = 1;
  int m = l++;
  int n = ++l;
  cout << m << n << endl;
}