// program mencari bilangan fpb
// output
// Enter two positive integers: 366 60
// H.C.F of 366 and 60 is: 6

#include <iostream>
using namespace std;

int hcf(int n1, int n2);

int main()
{
   int n1, n2;

   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;

   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);

   return 0;
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}