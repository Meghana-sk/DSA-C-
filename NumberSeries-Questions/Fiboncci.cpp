/**
  Print fibonaccie series
  0 1 1 2 3 .......

*/

#include <iostream>
using namespace std;

int main()
{
  int first = 0;
  int second = 1;
  int n;
  cin>> n;
  cout << first << second;
  for (int i = 0;i < n;i++)
  {
    int next = first + second;
    cout <<  next;
    first = second;
    second = next;
  }

}