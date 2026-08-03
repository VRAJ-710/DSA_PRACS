#include <iostream>
using namespace std;

int search(string arr[], int n, string key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int searchRec(string arr[], string key, int low, int high) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return searchRec(arr, key, mid + 1, high);
    else
        return searchRec(arr, key, low, mid - 1);
}

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    string codes[100];

    cout << "Enter book codes (sorted):" << endl;
    for (int i = 0; i < n; i++)
        cin >> codes[i];

    string key;
    cout << "Enter code to find: ";
    cin >> key;

    int pos1 = search(codes, n, key);
    if (pos1 != -1)
        cout << "Iterative: Found at position " << pos1 + 1 << endl;
    else
        cout << "Iterative: Not found" << endl;

    int pos2 = searchRec(codes, key, 0, n - 1);
    if (pos2 != -1)
        cout << "Recursive: Found at position " << pos2 + 1 << endl;
    else
        cout << "Recursive: Not found" << endl;

    return 0;
}
