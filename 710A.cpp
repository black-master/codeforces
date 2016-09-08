/**
Author : Zubayer Rahman
Email  : zubayer.csesust@gmail.com
CPU    : 0.015s
Memory : 0KB
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<algorithm>

using namespace std;

int dx[]= {1,1,1,-1,-1,-1,0,0};
int dy[]= {0,1,-1,0,1,-1,1,-1};

int main()
{
    char str[2];
    int c,d;
    int i;
    int x,y;
    int result;

    while(cin>>str)
    {
        c=str[0];
        d=str[1];

        result=0;

        for(i=0; i<8; i++)
        {
            x=c+dx[i];
            y=d+dy[i];

            if(x>=97 && x<=104 && y>=49 && y<=56)
                result++;
        }

        cout<<result<<endl;
    }
    return 0;
}
