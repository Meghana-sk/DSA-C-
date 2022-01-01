/* Two pointer approach*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> arr,int sum){
  vector<int> ans;
  int i = 0, j = 0;
  for (i = 0;i < arr.size();i++){
    for(j = i + 1;j < arr.size();j++){
      if (arr[i]+arr[j] == sum){
        ans.push_back(min(arr[i],arr[j]));
        ans.push_back(max(arr[i],arr[j]));
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
  vector<int> a1 = {1,2,3,4,5,8};

  vector<int> ans = pairSum(a1,5);
  printArray(ans);
}