#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMax(int a[],int size){
  int max = INT_MIN;
  for(int i=0;i<size;i++){
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

int getMin(int a[],int size){
  int min = INT_MAX;
  for(int i=0;i<size;i++){
    if (a[i] < min) {
      min = a[i];
    }
  }
  return min;
}
int main(){
  int a[100000];
  int n;
  cout << "enter size of array" << endl;
  cin >> n;
  cout << "enter elements of the array" << endl;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  cout << "max element:" << getMax(a, n) << endl;
  cout << "min element:" << getMin(a,n) << endl;
}