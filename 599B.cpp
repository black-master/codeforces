/**
Online Judge : CodeForces
Problem No   : 599B
Problem Name : Spongebob and Joke
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.311s
Memory       : 6700KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

vector<int> v;
map<int, vector<int> > mp;

int main()
{
    int n, m, i, j, k;

    while(cin>>n>>m)
    {
        bool pk=true, amb=false;
        int _count=0;

        for(i=1; i<=n; i++)
        {
            cin>>k;
            mp[k].push_back(i);
        }

        for(j=0; j<m; j++)
        {
            cin>>k;

            if(!mp[k].size())
                pk=false;

            if(mp[k].size()>1)
                amb=true;

            v.push_back(k);
        }

        if(!pk)
            cout<<"Impossible"<<endl;
        else
        {
            if(amb)
                cout<<"Ambiguity"<<endl;
            else
            {
                cout<<"Possible"<<endl;
                for(i=0; i<m; i++)
                {
                    k=v[i];
                    cout<<mp[k][0];
                    if(i<m-1)
                        printf(" ");
                    else cout<<endl;
                }
            }
        }
        v.clear();
        mp.clear();
    }
    return 0;
}
