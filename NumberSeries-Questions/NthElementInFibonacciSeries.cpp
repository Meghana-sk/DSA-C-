#include <iostream>

using namespace std;

int nthElementInFibonacciSeries(int n){
    int first = 0;
    int second = 1;
    int i = 1;
    while(i < n){
        int next = first + second;
        first = second;
        second = next;
        i++;
    }
    return first;
}
int main()
{
    int n;
    cin >> n;
    
    cout << "n the element in fibonacci series: " << nthElementInFibonacciSeries(n) << endl; 

    return 0;
}
