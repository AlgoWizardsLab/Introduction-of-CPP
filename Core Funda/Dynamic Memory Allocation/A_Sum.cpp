#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        // Check all combinations
        if (arr[0] + arr[1] == arr[2] ||
            arr[0] + arr[2] == arr[1] ||
            arr[1] + arr[2] == arr[0]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
