// menghitung rata-rata nomor menggunakan array
// output
// Enter the numbers of data: 6
// 1. Enter number: 45.3
// 2. Enter number: 67.5
// 3. Enter number: -45.6
// 4. Enter number: 20.34
// 5. Enter number: 33
// 6. Enter number: 45.6
// Average = 27.69

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}