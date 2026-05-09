#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], c[2][2];
    int i, j;

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            cin >> a[i][j];

    // Input Matrix B
    cout << "Enter elements of Matrix B:\n";
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            cin >> b[i][j];

    // Addition
    cout << "\nAddition:\n";
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    // Subtraction
    cout << "\nSubtraction:\n";
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose of A
    cout << "\nTranspose of Matrix A:\n";
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    // Transpose of B
    cout << "\nTranspose of Matrix B:\n";
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            cout << b[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}