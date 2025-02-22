#include<iostream>
using namespace std;
void sort(vector<int>&nums){
    //Dutch National Flag Algorithm
    int low=0, mid=0, high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1)
            mid++;
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    sort(nums);
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
    cout<<endl;
    return 0;
}