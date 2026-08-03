#include <iostream>
using namespace std;

int main() {
    int n, h;

    cout << "Enter number of items: ";
    cin >> n;

    int arr[100];

    cout << "Enter the items: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter hours: ";
    cin >> h;

    int r = h % n;

    cout << "Final order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[(r + i) % n];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
