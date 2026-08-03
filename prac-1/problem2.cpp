#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of records: ";
    cin >> n;

    int log[100];

    cout << "Enter book IDs: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> log[i];
    }

    int books[100], cnt[100];
    int total = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < total; j++) {
            if (books[j] == log[i]) {
                cnt[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            books[total] = log[i];
            cnt[total] = 1;
            total++;
        }
    }

    cout << "Books borrowed more than once:" << endl;
    bool any = false;
    for (int i = 0; i < total; i++) {
        if (cnt[i] > 1) {
            cout << "Book " << books[i] << " - " << cnt[i] << " times" << endl;
            any = true;
        }
    }

    if (!any) {
        cout << "None" << endl;
    }

    return 0;
}
