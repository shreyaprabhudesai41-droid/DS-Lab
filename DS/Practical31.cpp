#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter value to search: ";
    cin >> value;

    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            cout << "Found at position " << i;
            return 0;
        }
    }

    cout << "Not found";
    return 0;
}