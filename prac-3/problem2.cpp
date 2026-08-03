#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of buckets: ";
    cin >> n;

    int arr[100];

    cout << "Enter colour codes (0, 1, or 2):" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) c0++;
        else if (arr[i] == 1) c1++;
        else c2++;
    }

    int idx = 0;
    for (int i = 0; i < c0; i++) arr[idx++] = 0;
    for (int i = 0; i < c1; i++) arr[idx++] = 1;
    for (int i = 0; i < c2; i++) arr[idx++] = 2;

    cout << "Sorted: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
