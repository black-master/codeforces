/**
Online Judge : CodeForces
Problem No   : 1343B/Div.3
Problem Name : Balanced Array
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.031s
Memory       : 0KB
Algorithm    : Implementation/Math
*/

#include<bits/stdc++.h>

using namespace std;

int T;

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    scanf("%d", &T);
    while(T--)
    {
        int n;
        scanf("%d", &n);

        if(n / 2 % 2)
            printf("NO\n");
        else
        {
            printf("YES\n");

            int k = 2;
            int i;
            for(i = 1; i <= n / 2; i++)
                printf("%d ", k * i);
            for(i = 1; i < n / 2; i++)
                printf("%d ", (i - 1) * 2 + 1);

            printf("%d\n", (i - 1) * 2 + 1 + (n / 2));
        }
    }
}

int main()
{
    solve();
    return 0;
}
