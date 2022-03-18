#include<bits/stdc++.h>
using namespace std;

void power_set(string s){
    vector<string>st;
    int n = s.length();
    int pow_size = pow(2,n);
    for(int c = 0;c<pow_size;c++){
        for(int j = 0;j<n;j++){
            if((c & (1<<j))!=0){
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main(){
    string str;
    cin>>str;
    power_set(str);
    return 0;
}