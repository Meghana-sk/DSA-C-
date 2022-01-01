#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
  for(int i = 0;i < arr.size();i++)
  {
    cout << arr[i] << " ";
  }
}

vector<int> sortO12(vector<int> arr)
{
  // vector<int> ans;
  for(int i = 0;i < arr.size();i++)
  {
    for(int j = i+1;j < arr.size();j++)
    {
      for(int k = j+1;k < arr.size();k++)
      {
        if (arr[k] < arr[j]) // [0,2,1,0,2,1,1,0,0,1,0,2]
        {
          swap(arr[k],arr[j]); // [0,1,2,0,2,1,1,0,0,1,0,2]
        } 
        else if (arr[k] < arr[i])
        {
          swap(arr[k],arr[i]);
        }
      }
    }
  }
  return arr;
}

int main()
{

}