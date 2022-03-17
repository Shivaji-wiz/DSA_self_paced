#include<bits/stdc++.h>
using namespace std;

int findodd(int arr[],int n){
    int res = 0;
    for(int i = 0;i<n;i++){
        res = res^arr[i];
    }
    return res;
}

int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findodd(arr,n)<<endl;
    return 0;
}