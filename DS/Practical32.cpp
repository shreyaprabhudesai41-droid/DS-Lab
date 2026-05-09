#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, value;
    int low, high, mid;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements (sorted): ";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter value to search: ";
    cin >> value;

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == value) {
            cout << "Found at position " << mid;
            return 0;
        }
        else if(value < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Not found";
    return 0;
}