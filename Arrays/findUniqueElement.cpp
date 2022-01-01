#include <iostream>
using namespace std;
int findUnique(int a[],int size)
{
  int unique = 0;
  for (int i = 0;i < size;i++)
  {
    unique = unique ^ a[i];
  }
  return unique;
}

int main()
{
  int a[] = {99,5,7,5,7};
  cout << "unique:" << findUnique(a,5);
}