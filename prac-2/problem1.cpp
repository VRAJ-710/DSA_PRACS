#include <iostream>
using namespace std;

int search(string arr[], int n, string key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int searchRec(string arr[], int n, string key, int i) {
    if (i >= n)
        return -1;
    if (arr[i] == key)
        return i;
    return searchRec(arr, n, key, i + 1);
}

int main() {
    int n;

    cout << "Enter number of vehicles: ";
    cin >> n;

    string plates[100];

    cout << "Enter license plates:" << endl;
    for (int i = 0; i < n; i++)
        cin >> plates[i];

    string key;
    cout << "Enter plate to find: ";
    cin >> key;

    int pos1 = search(plates, n, key);
    if (pos1 != -1)
        cout << "Iterative: Found at position " << pos1 + 1 << endl;
    else
        cout << "Iterative: Not found" << endl;

    int pos2 = searchRec(plates, n, key, 0);
    if (pos2 != -1)
        cout << "Recursive: Found at position " << pos2 + 1 << endl;
    else
        cout << "Recursive: Not found" << endl;

    return 0;
}
