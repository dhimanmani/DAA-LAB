#include<iostream>
using namespace std;
void reverse(vector<int>&nums,int s,int e){
    while(s<e){
        swap(nums[s],nums[e]);
        s++;
        e--;
    }
}
void rotate(vector<int>&nums,int k){
    int n=nums.size();
    k=k%n;
    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int k;
    cin>>k;
    rotate(nums,k);
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
    cout<<endl;
    return 0;
}