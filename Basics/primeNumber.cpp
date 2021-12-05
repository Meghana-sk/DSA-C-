#include <iostream>
using namespace std;

int main() {
  int n,i;
  cout << "enter the number n to check if its a prime number or not:\n";
  cin >> n;

  for (i = 2; i < n;i++){
    if (n % i == 0) {
      cout << n << " is not prime" << endl;
      break;
    }
  }
  if (i == n)
    cout << n << " is prime" << endl;
}