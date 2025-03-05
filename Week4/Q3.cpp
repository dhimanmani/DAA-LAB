#include <iostream>
#include <vector>
#include <cstdlib>  
#include <ctime>    
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int partition(vector<int>& arr, int low, int high) {
    int pivotIndex = low + rand() % (high - low + 1);
    swap(arr[pivotIndex], arr[high]); 
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  
    return i + 1;
}
int quickSelect(vector<int>& arr, int low, int high, int K) {
    if (low <= high) {
        int pivotIndex = partition(arr, low, high);
        if (pivotIndex == K) {
            return arr[pivotIndex];
        } else if (pivotIndex < K) {
            return quickSelect(arr, pivotIndex + 1, high, K);
        } else {
            return quickSelect(arr, low, pivotIndex - 1, K);
        }
    }
    return -1;  
}

int main() {
    srand(time(0)); 
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n; 
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i]; 
        }
        int K;
        cin >> K; 
        if (K < 1 || K > n) {
            cout << "not present" << endl;
            continue;
        }
        int result = quickSelect(arr, 0, n - 1, K - 1);  
        if (result != -1) {
            cout << result << endl;
        } else {
            cout << "not present" << endl;
        }
    }
    return 0;
}