#include<bits\stdc++.h>
using namespace std;

bool pow2(int n){
    if(n==0)return false;

    while(n!=1){
        if(n%2!=0){
            return false;
        }
        n=n/2;
    }
    return true;
}

bool poww2(int n){
    if(n==0)return false;

    return((n & (n-1)) == 0);
}

bool powww2(int n){
    return ((n!=0) && (n & (n-1))==0);
}

int main(){
    int n;
    cin>>n;

    if(pow2(n))cout<<"True"<<endl;
    else cout<<"False"<<endl;

    if(poww2(n))cout<<"True"<<endl;
    else cout<<"False"<<endl;

    if(powww2(n))cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}