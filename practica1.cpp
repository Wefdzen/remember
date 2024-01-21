#include <iostream>

using namespace std;

int main() {
  int i;
  cout << "INput your number:";
  cin >> i;
  cout << "hello world" << endl;
  if (i == 5)
    goto link;
  cout << "bro";
link:
  cout << "my name is Dima";
  return 0;
}
