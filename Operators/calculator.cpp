#include <iostream>
using namespace std;

int main()
{
  int a,b;
  char ch;
  cout << "enter two numbers\n";
  cin >> a >> b;
  cout << "enter operation" << endl;
  cin >> ch;
  switch(ch) {
    case '+': cout << "sum:" << a + b << endl;
              break;
    case '-': cout << "difference:" << a - b << endl;
    break;
    case '*': cout << "product:" << a * b << endl;
    break;
    case '/': if (b > 0) {
      cout << "quotient:"<< a / b << endl;
    } else {
      cout << "enter divisor greater than 0" << endl;
    }
    break;
  }
}