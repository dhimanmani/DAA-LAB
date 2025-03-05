#include <iostream>
#include <vector>
using namespace std;
long long mergeAndCount(vector<int>& arr, int left, int mid, int right, int& comparisons) {
    vector<int> leftSub(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightSub(arr.begin() + mid + 1, arr.begin() + right + 1);
    int i = 0, j = 0, k = left;
    long long inversions = 0;
    while (i < leftSub.size() && j < rightSub.size()) {
        comparisons++; 
        if (leftSub[i] <= rightSub[j]) {
            arr[k++] = leftSub[i++];
        } else {
            arr[k++] = rightSub[j++];
            inversions += leftSub.size() - i; 
        }
    }
    while (i < leftSub.size()) arr[k++] = leftSub[i++];
    while (j < rightSub.size()) arr[k++] = rightSub[j++];
    return inversions;
}
long long mergeSort(vector<int>& arr, int left, int right, int& comparisons) {
    long long inversions = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        inversions += mergeSort(arr, left, mid, comparisons);
        inversions += mergeSort(arr, mid + 1, right, comparisons);
        inversions += mergeAndCount(arr, left, mid, right, comparisons);
    }
    return inversions;
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
        int comparisons = 0;
        long long inversions = mergeSort(arr, 0, n - 1, comparisons);
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "comparisons = " << comparisons << endl;
        cout << "inversions = " << inversions << endl;
    }
    return 0;
}