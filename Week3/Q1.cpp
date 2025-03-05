#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void InsertionSort(vector<int>&nums, int& shifts, int& comparisons){
    int n=nums.size();
    comparisons=0;
    shifts=0;
    for(int i=1;i<n;i++){
        int key=nums[i];
        int j=i-1;
        comparisons++;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
            shifts++;
            if(j>=0) 
                comparisons++;
        }
        nums[j+1]=key;
            shifts++;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int shifts=0, comparisons=0;
        InsertionSort(nums, shifts, comparisons);
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        cout<<"comparisons = "<<comparisons<<endl;
        cout<<"shifts = "<<shifts<<endl;
    }
    return 0;
}