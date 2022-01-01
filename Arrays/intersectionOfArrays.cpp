#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;


vector<int> findIntersection(vector<int> arr1,vector<int> arr2){
  vector<int> ans;
  for(int i = 0;i < arr1.size();i++){
    for(int j = 0;j < arr2.size();j++){
      if (arr1[i] == arr2[j]){
        ans.push_back(arr1[i]);
        arr2[j] = INT_MIN; //so that same number is not included
        break;
      }
    }
  }
  return ans;
}

void printArray(vector<int> arr){
  for(int i = 0;i < arr.size();i++){
    cout << arr[i] << " "; 
  }
}

int main()
{
  vector<int> arr1 = {1,2,3,4};
  vector<int> arr2 = {2,4,6,7};

  vector<int> arrayIntersection;
  arrayIntersection = findIntersection(arr1,arr2);
  printArray(arrayIntersection);
}