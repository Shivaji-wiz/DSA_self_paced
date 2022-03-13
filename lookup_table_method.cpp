#include<bits/stdc++.h>
using namespace std;

int table[256];

void initialise(){
    table[0] = 0;
    for(int i = 1;i<256;i++){
        table[i] = (i&1) + table[i/2];
    }
}

int count(int n){
     int res = table[n & 0Xff];
     n = n>>8;
     res = res + table[n & 0Xff];
     n = n >> 8;
     res = res + table[n & 0Xff];
     n = n >> 8;
     res = res + table[n & 0Xff];
     return res;
}

int main(){
    initialise();
    int k = 15;
    cout<<count(k);
    return 0;
}
//TC = theta(1)