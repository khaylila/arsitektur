// mengubah bilangan oktal ke bilangan desimal
// output
// Enter an octal number: 2341
// 2341 in octal = 1249 in decimal

#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int octalNumber);

int main()
{
   int octalNumber;
   cout << "Enter an octal number: ";
   cin >> octalNumber;
   cout << octalNumber << " in octal = " << octalToDecimal(octalNumber) << " in decimal";
   
   return 0;
}

// fungsi untuk mengubah oktal ke desimal
int octalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}