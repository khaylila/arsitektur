// program menghitung dua buah matriks
// output
// Enter number of rows (between 1 and 100): 2
// Enter number of columns (between 1 and 100): 2

// Enter elements of 1st matrix:
// Enter element a11: -4
// Enter element a12: 5
// Enter element a21: 6
// Enter element a22: 8

// Enter elements of 2nd matrix:
// Enter element b11: 3
// Enter element b12: -9
// Enter element b21: 7
// Enter element b22: 2

// Sum of two matrix is:
// -1   -4
// 13   10

#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // menyimpan elemen pada matriks pertama yang dimasukkan user
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // menyimpan elemen pada matriks kedua yang dimasukkan user
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // menambahkan 2 matriks
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // menampilkan hasil penambahan dua buah matriks
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}