/**
Online Judge : CodeForces
Problem No   : 1790D
Problem Name : Matryoshkas
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.405s
Memory       : 25300KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int T, n, a;

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);

        map<int, int> cnt;
        set<int> num;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);

            cnt[a]++;
            num.insert(a);
            num.insert(a + 1);
        }

        int last = 0;
        int result = 0;
        for(auto x : num)
        {
            int _count = cnt[x];
            result += max(0, _count - last);
            last = _count;
        }

        printf("%d\n", result);
    }
}

int main()
{
    solve();
    return 0;
}
