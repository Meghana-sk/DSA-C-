#include <iostream>
using namespace std;

int sumOfArray(int a[],int size){
  int sum = 0;
  for (int i = 0;i < size; i++){
    sum += a[i];
  }
  return sum;
}
int main(){
  int n;
  cout << "enter the size of array" << endl;
  cin >> n;
  int a[10000];
  cout << "enter the array elements" << endl;
  for (int i = 0;i < n;i++){
    cin >> a[i];
  }
  cout << "sum of array:" << sumOfArray(a, n);
}