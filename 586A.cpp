/**
Author : Zubayer Rahman
Email  : zubayer.csesust@gmail.com
CPU    : 0.031s
Memory : 0KB
*/

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>

#define MAX 105

using namespace std;

int ara[MAX];

int main()
{
    int n,a;
    int hour;
    int i;
    int start,finish;
    bool flag,stop;
    int zero;

    while(cin>>n)
    {
        flag=stop=false;
        zero=hour=0;
        start=finish=MAX;

        for(i=0; i<n; i++)
            cin>>ara[i];
        for(i=0; i<n; i++)
            if(ara[i])
            {
                start=i;
                break;
            }

        for(i=n-1; i>=0; i--)
            if(ara[i])
            {
                finish=i;
                break;
            }

        if(start==MAX && finish==MAX)
            hour=0;
        else
            hour=(finish-start)+1;

        for(i=start; i<=finish; i++)
        {
            if(flag && ara[i])
                flag=false;
            if(stop && ara[i])
                stop=false;
            if(stop && !ara[i])
                zero++;
            if(flag && !ara[i])
            {
                stop=true;
                flag=false;
                zero+=2;
            }
            if(!stop && !ara[i])
                flag=true;
        }
        hour-=zero;

        cout<<hour<<endl;
    }
    return 0;
}
