/**
Online Judge : CodeForces
Problem No   : 1917B
Problem Name : Erase First or Second Letter
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.031s
Memory       : 200KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T;
    int n;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);
        getchar();

        set<char> st;

        char str[n];
        scanf("%[^\n]%*c", str);

        int cnt = 0;
        for(int idx = 0; idx < n; idx++)
        {
            st.insert(str[idx]);
            cnt += st.size();
        }

        printf("%d\n", cnt);
    }

    return 0;
}
