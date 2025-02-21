#include<iostream>
#include<vector>
using  namespace std;
int BinarySearch(vector<int>nums, int key){
    int n=nums.size();
    int low=0, high=n-1;
    int mid;
    int count=1;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==key)
            return count;
        else if(nums[mid]>key)
            low=mid;
        else    
            high=mid-1;
        count++;
    }
    return -1;
}
int main(){
    
}