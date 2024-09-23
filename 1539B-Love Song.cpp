/**
Online Judge : CodeForces
Problem No   : 1539B
Problem Name : Love Song
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.124s
Memory       : 4500KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int n, q, l, r;
    char s[n + 1];

    while(scanf("%d %d", &n, &q) == 2)
    {
        scanf("%s", s);

        int sum[n + 1];

        for(int i = 0; i < n; i++)
            sum[i + 1] = sum[i] + (s[i] - 'z' + 26);

        for(int i = 0; i < q; i++)
        {
            scanf("%d %d", &l, &r);
            printf("%d\n", sum[r] - sum[l - 1]);
        }
    }

    return 0;
}
