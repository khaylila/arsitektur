// program untuk menampilkan faktor dari sebuah bilangan
// output
// Enter a positive integer: 60
// Factors of 60 are: 1 2 3 4 5 6 10 12 15 20 30 60

#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << " ";
    }

    return 0;
}