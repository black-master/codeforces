/**
Online Judge : CodeForces
Problem No   : 1778B
Problem Name : The Forbidden Permutation
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.187s
Memory       : 800KB
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
    int n, m, d;
    int num;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d %d", &n, &m, &d);

        int P[n + 1];
        int M[m + 1];

        for(int idx = 1; idx <= n; idx++)
        {
            scanf("%d", &num);
            P[num] = idx;
        }

        for(int idx = 1; idx <= m; idx++)
            scanf("%d", &M[idx]);

        int ans = 1e9;

        for(int idx = 1; idx < m; idx++)
        {
            int k = P[M[idx]];
            int l = P[M[idx + 1]];

            if(k > l || l > k + d)
            {
                ans = 0;
                break;
            }

            if(k < l && l <= k + d)
            {
                int x1 = l - k;
                int x2 = n - l + k - 1;

                if(x2 >= (d - x1) + 1)
                    ans = min(ans, min(x1, (d - x1) + 1));
                else
                    ans = min(ans, x1);
            }

        }

        printf("%d\n", ans);
    }

    return 0;
}
