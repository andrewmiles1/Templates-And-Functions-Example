#include <iostream>
using namespace std;

template <class T>
T fixed_multiply(T val, int multiplier)
{
  return val * multiplier;
}

int main() {
  cout << fixed_multiply<int>(10, 2);
}