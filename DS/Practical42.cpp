#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, j, min, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++);
    cin >> arr[i];

    for(i = 0; i < n-1; i++) {
        min = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}