#include<iostream>
#include<vector>
using namespace std;
int LinearSearch(vector<int>a,int key){
    int i;
    for( i=0;i<a.size();i++){
        if(a[i]==key)
            return i+1;
    }
    return i;
}

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key to search : ";
    cin>>key;
    int index;
    index=LinearSearch(a,key);
    if(index<n)
        cout<<"Present "<<index<<endl;
    else    
        cout<<"Not present "<<index<<endl;
    return 0;
}