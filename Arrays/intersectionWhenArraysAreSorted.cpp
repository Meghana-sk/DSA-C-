/* Two pointer approach*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> arrayIntersection(vector<int> arr1,vector<int> arr2){
  vector<int> ans;
  int i = 0, j = 0;
  while(i < arr1.size() && j < arr2.size()){
    if(arr1[i] < arr2[j]){
      i++;
    } else if (arr1[i] == arr2[j]){
      ans.push_back(arr1[i]);
      i++;
      j++;
    } else if (arr1[i] > arr2[j]){
      j++;
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
  vector<int> a1 = {1,2,3,4,5,8};
  vector<int> a2 = {4,6,7,8,9,9};

  vector<int> ans = arrayIntersection(a1,a2);
  printArray(ans);
}