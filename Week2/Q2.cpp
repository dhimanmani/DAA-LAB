#include <iostream>
#include <vector>

using namespace std;

bool findIndices(const vector<int>& arr, int n) {
    for (int k = n - 1; k >= 2; --k) {
        int i = 0, j = k - 1;
        while (i < j) {
            if (arr[i] + arr[j] == arr[k]) {
                cout << i + 1 << ", " << j + 1 << ", " << k + 1 << endl;
                return true;
            } else if (arr[i] + arr[j] < arr[k]) {
                i++;
            } else {
                j--;
            }
        }
    }
    return false;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (!findIndices(arr, n)) {
            cout << "No sequence found." << endl;
        }
    }
    return 0;
}