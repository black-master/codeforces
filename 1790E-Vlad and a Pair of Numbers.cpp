/**
Online Judge : CodeForces
Problem No   : 1781B
Problem Name : Vlad and a Pair of Numbers
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.031s
Memory       : 0KB
Algorithm    : Implementation/Bitmask
*/

#include<bits/stdc++.h>

using namespace std;

int T, x;

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &x);

        unsigned long long a = x, b = 0;
        for(int i = 32; i >= 0; i--)
        {
            if((x & (1llu << i)) > 0)
                continue;

            if ((2 * x - a - b) >= (2llu << i))
            {
                a += 1llu << i;
                b += 1llu << i;
            }
        }

        if(a + b == 2 * x && a ^ b == x)
            printf("%llu %llu\n", a, b);
        else printf("%d\n", -1);
    }

}

int main()
{
    solve();
    return 0;
}
