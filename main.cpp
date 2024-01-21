#include <chrono>
#include <iostream>
#include <thread>

using namespace std;
void print() {
  for (size_t i = 0; i < 10; i++) {
    cout << "Id: " << this_thread::get_id() << " func" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
  }
}
using namespace std;
int main() {
  thread th(print);

  for (size_t i = 0; i < 10; i++) {
    cout << "Id: " << this_thread::get_id() << " main" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
  }
  th.join();
  return 0;
}
