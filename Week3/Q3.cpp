#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checkDuplicates(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++){
        if (arr[i] == arr[i + 1])
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (checkDuplicates(arr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}