#include<bits/stdc++.h>
using namespace std;

void kthbit1(int n,int k){
    if( n & (1<(k-1))!=0){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}

void kthbit2(int n, int k)
{
    if ((n>>(k-1)&1)==1)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}

int main()
{
    int i = 5;
    int b = 3;
    kthbit1(i,b);
    cout << endl;
    kthbit2(i,b);
    return 0;
}