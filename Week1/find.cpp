#include<iostream>
using namespace std;
//Xor Bitwise Operation
int occurence(vector<int>&nums){
    int res=0;
    for(int n=0;n<nums.size();n++){
        res=res^nums[n];
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int res=occurence(nums);
    cout<<res<<endl;
    return 0;
}