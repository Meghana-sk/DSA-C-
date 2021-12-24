#include <iostream>
using namespace std;

int factorial(int x)
{
  int fact = 1;
  while(x != 0){
    fact *= x;
    x--;
  }
  return fact;
}

int nCr(int n,int r)
{
  int combination = 0;
  if (n > 0 && r > 0){
    if (r > n) {
      r = n;
    }
    combination = factorial(n) / (factorial(r) * factorial(n - r));
    return combination;
  } 
  else {
    cout << "numbers negative" << endl;
  }
  return -1;
}

int main()
{
  int n,r;
  cout << "enter n and r" << endl;
  cin >> n >> r;
  
  cout << nCr(n,r);
}