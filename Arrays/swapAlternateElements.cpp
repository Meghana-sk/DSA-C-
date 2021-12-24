#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

void swapAlternateArrayElements(int arr[], int size)
{
  for(int i = 0;i < size; i+=2)
  {
    if (i+1 < size)
    {
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp; 
    }
  }
}

void printArray(int a[],int size)
{
  for(int i = 0;i < size;i++)
  {
    cout << a[i] << " ";
  }
}

int main()
{
  int a[6] = {5,7,9,4,89,90};
  cout << "before swapping" << endl;
  printArray(a, 6);
  swapAlternateArrayElements(a, 6);
  cout << "after swapping" << endl;
  printArray(a,6);
  
}