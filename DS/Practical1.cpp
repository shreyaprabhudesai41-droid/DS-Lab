#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, choice, value, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\n1.Display\n2.Search\n3.Insert\n4.Delete\n";
    cout << "Enter choice: "; 
    cin >> choice;

    switch(choice) {

        case 1: // Display
            for(i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2: // Search
            cout << "Enter value: ";
            cin >> value;
            for(i = 0; i < n; i++) {
                if(arr[i] == value) {
                    cout << "Found at position " << i;
                    break;
                }
            }
            if(i == n)
                cout << "Not found";
            break;

        case 3: // Insert at end
            cout << "Enter value: ";
            cin >> value;
            arr[n] = value;
            n++;
            cout << "After insertion: ";
            for(i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 4: // Delete by position
            cout << "Enter position to delete: ";
            cin >> pos;

            if(pos < 0 || pos >= n) {
                cout << "Invalid position";
            } else {
                for(i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "After deletion: ";
                for(i = 0; i < n; i++)
                    cout << arr[i] << " ";
            }
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}