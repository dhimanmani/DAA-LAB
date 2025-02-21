#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int frequency(vector<int>nums,int key){
    unordered_map<int,int>freq;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (mid==key)
            return freq[nums[mid]];
        else if(key>mid)
            low=mid+1;
        else
            high=mid;
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
    int index = frequency(a, key);
    if(index<=0)
        cout<<"Not present"<<endl;
    else
        cout<<"Present and frequency is "<<index<<endl;
    return 0;
}