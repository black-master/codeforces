/**
Online Judge : CodeForces
Problem No   : 1A
Problem Name : Theatre Square
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
CPU          : 0.031s
Memory       : 12KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

long long n,m,a;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    while(cin>>n>>m>>a)
    {
        long long _n,_m,_a;

        if(n%a==0)
            _n=n/a;
        else
            _n=(n/a)+1;

        if(m%a==0)
            _m=m/a;
        else
            _m=(m/a)+1;

        _a=_n*_m;

        cout<<_a<<endl;
    }
    return 0;
}
