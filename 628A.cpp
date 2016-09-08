/**
Author : Zubayer Rahman
Email  : zubayer.csesust@gmail.com
CPU    : 0.03s
Memory : 0KB
*/

#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    long long n,b,p;

    while(cin>>n>>b>>p)
    {
        long long towel,bottle,match=0,m,x,temp;
        double y,k;

        towel=n*p;
        bottle=(2*b)+1;

        m=n;

        while(true)
        {
            if(m==1)
                break;
            y=log2(m);
            x=y;
            y=x;

            k=pow(2.0,y);
            x=k;

            match+=(x/2);
            temp=(m-x);
            m=(x/2);
            m+=temp;
        }
        cout<<match*bottle<<" "<<towel<<endl;
    }
    return 0;
}
