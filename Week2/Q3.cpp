#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int countPairsWithDifference(const vector<int>& arr, int K) {
    unordered_set<int> elements;
    int count = 0;
    for (int n =0;n<arr.size();n++) {
        if (elements.find(arr[n] - K) != elements.end()) 
            count++;
        if (elements.find(arr[n] + K) != elements.end()) 
            count++;
        elements.insert(arr[n]);
    }
    return count;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, K;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) 
            cin >> arr[i];
        cin >> K;
        cout << countPairsWithDifference(arr, K) << endl;
    }
    return 0;
}