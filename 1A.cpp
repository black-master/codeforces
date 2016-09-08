/**
Author : Zubayer Rahman
Email  : zubayer.csesust@gmail.com
CPU    : 0.031s
Memory : 0KB
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long n,m,a;

    while(cin>>n>>m>>a)
    {
        long long _n,_m,_a;

        if(n%a==0)
        {
            _n=n/a;
        }
        else
        {
            _n=(n/a)+1;
        }

        if(m%a==0)
        {
            _m=m/a;
        }
        else
        {
            _m=(m/a)+1;
        }

        _a=_n*_m;

        cout<<_a<<endl;
    }
    return 0;
}
