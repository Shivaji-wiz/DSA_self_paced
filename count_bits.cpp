#include <bits/stdc++.h>
using namespace std;

unsigned int countbit1(unsigned int n)
{
    unsigned int res = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            res++;
        }
        n = n / 2;
    }
    return res;
}

unsigned int countbit2(unsigned int n)
{
    unsigned int res = 0;
    while (n > 0)
    {
        if (n & 1 == 1)
        {
            res++;
        }
        n = n >> 1;
    }
    return res;
}

int countbit3(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res + (n & 1);
        n = n >> 1;
    }

    return res;
}

int BKalgo(int n){
    //brian kernningan's algorithm
    int res = 0;
    while(n>0){
        n = (n&(n-1));
        res++;
    }
    return res;
}//TC = theta(number of set bits only)

int main()
{
    int i = 15;
    cout << countbit1(i);
    cout << endl;
    cout << countbit2(i);
    cout << endl;
    cout << countbit3(i);
    cout << endl;
    cout << BKalgo(i);

    return 0;
}