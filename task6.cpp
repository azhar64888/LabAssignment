#include <iostream>
using namespace std;

int main() {
    int arr[10], key;
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Enter value to search: ";
    cin >> key;

    int index = -1;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << key << " found at index " << index << " (position " << index + 1 << ").\n";
    else
        cout << key << " not found in the array.\n";

    return 0;
}
