#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, j, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}