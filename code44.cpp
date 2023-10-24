// mencari elemen terbesar dalam array
// output
// Enter total number of elements(1 to 100): 8

// Enter Number 1 : 23.4
// Enter Number 2 : -34.5
// Enter Number 3 : 50
// Enter Number 4 : 33.5
// Enter Number 5 : 55.5
// Enter Number 6 : 43.7
// Enter Number 7 : 5.7
// Enter Number 8 : -66.5

// Largest element = 55.5

#include <iostream>
using namespace std;

int main() {

  int i, n;
  float arr[100];

  cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;

  // Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {

    // Change < to > if you want to find the smallest element
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}
