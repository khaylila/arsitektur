// program menghitung standar deviasi
// output
// Enter 10 elements: 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10

// Standard Deviation = 2.87228

#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[]);

int main() {
  int i;
  float data[10];

  cout << "Enter 10 elements: ";
  for(i = 0; i < 10; ++i) {
    cin >> data[i];
  }

  cout << endl << "Standard Deviation = " << calculateSD(data);

  return 0;
}

float calculateSD(float data[]) {
  float sum = 0.0, mean, standardDeviation = 0.0;
  int i;

  for(i = 0; i < 10; ++i) {
    sum += data[i];
  }

  mean = sum / 10;

  for(i = 0; i < 10; ++i) {
    standardDeviation += pow(data[i] - mean, 2);
  }

  return sqrt(standardDeviation / 10);
}
