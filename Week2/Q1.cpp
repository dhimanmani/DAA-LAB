#include <iostream>
#include <vector>
using namespace std;
int findFirstOccurrence(const vector<int>& arr, int key) {
    int low = 0, high = arr.size() - 1;
    int first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}
int findLastOccurrence(const vector<int>& arr, int key) {
    int low = 0, high = arr.size() - 1;
    int last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
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
        int key;
        cin >> key;

        int first = findFirstOccurrence(arr, key);
        if (first == -1) {
            cout << "Key not present" << endl;
        } else {
            int last = findLastOccurrence(arr, key);
            int count = last - first + 1;
            cout << key << " - " << count << endl;
        }
    }
    return 0;
}