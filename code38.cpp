// mengubah biner ke desimal
// output
// Enter a binary number: 1101
// 1101 in binary = 13 in decimal

#include <iostream>
#include <cmath>

using namespace std;

// fungsi prototype
int convert(long long);

int main() {
  long long n;
  cout << "Enter a binary number: ";
  cin >> n;
  cout << n << " in binary = " << convert(n) << " in decimal";
  return 0;
}

// fungsi definisi
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}