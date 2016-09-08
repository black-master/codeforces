/**
Author : Zubayer Rahman
Email  : zubayer.csesust@gmail.com
CPU    : 0.015s
Memory : 0KB
*/

#include<bits/stdc++.h>

using namespace std;

vector<int> vc;

int main()
{
    long long d1,d2,d3,res1,res2,res3,res4;

    while(cin>>d1>>d2>>d3)
    {
        if((d1+d2)<=d3)
        {
            res1=2*(d1+d2);
            vc.push_back(res1);
        }
        if((d1+d3)<=d2)
        {
            res2=2*(d1+d3);
            vc.push_back(res2);
        }
        if((d2+d3)<=d1)
        {
            res3=2*(d2+d3);
            vc.push_back(res3);
        }
        res4=d1+d2+d3;
        vc.push_back(res4);

        sort(vc.begin(),vc.end());

        cout<<vc[0]<<endl;

        vc.clear();
    }
    return 0;
}
