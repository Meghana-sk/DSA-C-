#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> arr){
  for(int i = 0;i < arr.size();i++){
    cout << arr[i] << " "; 
  }
  cout << endl;
}

void sortArray01(vector<int> &a)  { //0 1 0 0 1
  int i = 0,j = a.size() - 1;
  int step = 0;
  while(i < j){
    while (a[i] == 0 && i < j){
      i++;
    } 
    while (a[j] == 1 && i < j){
     
      j--;
     
    } 
       if (i < j) {
         swap(a[i],a[j]);
      i++;
      j--;
    }
  }
}



int main(){
  vector<int> a = {0,1,0,0,1,1,0,1,0,0};
  sortArray01(a);
  printArray(a);
}