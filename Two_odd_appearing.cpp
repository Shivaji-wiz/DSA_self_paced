#include <bits/stdc++.h>
using namespace std;

void Twoapp(int arr[], int n)//Naive approach
{
    for(int i = 0;i<n;i++){
        int count = 0 ;
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

void Twoapp_eff(int arr[],int n){
    int xr = 0,res1 = 0,res2 = 0;
    for(int i = 0;i<n;i++){
        xr = xr ^ arr[i];
    }
    int sb = xr & (~(xr-1));

    for(int i = 0;i<n;i++){
        if((arr[i] & sb)!=0){
            res1 = res1 ^ arr[i];
        }
        else{
            res2 = res2 ^ arr[i];
        }
    }
    cout << res1 << " ";
    cout << res2;
}

int main()
{
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Twoapp(arr, n);
    cout<<endl;
    Twoapp_eff(arr,n);
    return 0;
}