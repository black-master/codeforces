/**
Online Judge : CodeForces
Problem No   : 1804B
Problem Name : Vaccination
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.078s
Memory       : 800KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

#define MAX_N 200005

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T;
    int n, k, d, w;
    int moments[MAX_N];

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d %d %d", &n, &k, &d, &w);

        for(int i = 0; i < n; i++)
            scanf("%d", &moments[i]);

        int when = -1;
        int cnt = 0;
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(moments[i] <= when + d && cnt > 0)
                cnt--;
            else
            {
                when = moments[i] + w;
                cnt = k - 1;
                ans++;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
