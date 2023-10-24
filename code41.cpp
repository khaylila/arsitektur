// program untuk membalik bilangan string
// output
// Enter a sentence: margorp emosewa
// awesome program

#include <iostream>
using namespace std;

// fungsi prototype
void reverse(const string& a);

int main() {
  string str;

  cout << " Please enter a string " << endl;
  getline(cin, str);
    
  // fungsi call
  reverse(str);

  return 0;    
}

// fungsi definisi
void reverse(const string& str) {

  // menyimpan panjang karakter string
  size_t numOfChars = str.size();

  if(numOfChars == 1) {
    cout << str << endl;
  }
  else {
    cout << str[numOfChars - 1];

    // fungsi rekursif
    reverse(str.substr(0, numOfChars - 1));
  }
}