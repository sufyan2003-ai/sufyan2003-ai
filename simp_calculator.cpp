#include <iostream>
using namespace std;

int main() {

  float n1, n2;
  cout << "enter 1st numbers:";
  cin >> n1;
  cout << "enter 2nd number:";
  cin >> n2;

  char op;
  cout << "enter the operation (+ , - , / , *)" << endl;
  cin >> op;

  switch (op) {
  case '+':
    cout << n1 + n2 << endl;
    break;
  case '-':
    cout << n1 - n2 << endl;
    break;
  case '*':
    cout << n1 * n2 << endl;
    break;
  case '/':
    cout << n1 / n2 << endl;
    break;

  default:
    break;
     
  }
    return 0;
}