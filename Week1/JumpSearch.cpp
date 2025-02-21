#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int JumpSearch(vector<int> a, int key)
{
    int n = a.size();
    int s = 0;
    int i = 0;
    int e = pow(2, i);
    while (e < n)
    {
        if (a[s] <= key && key <= a[e])
        {
            int j = s;
            while (j <= e)
            {
                if (a[j] == key)
                    return j;
                j++;
            }
        }
        s = e;
        i++;
        e = pow(2, i);
        if (e >= n)
            e = n - 1;
    }
    return -1;
}
int main()
{
    cout << "Enter number of terms : ";
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "Enter element to search : ";
    cin >> key;
    int index = JumpSearch(a, key);
    cout << index << endl;
    return 0;
}