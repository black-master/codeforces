/**
Online Judge : CodeForces
Problem No   : 1925B
Problem Name : A Balanced Problemset?
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.500s
CPU          : 0.093s
Memory       : 0KB
Algorithm    : Implementation/Math
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T;
    long long x, n;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%lld %lld", &x, &n);

        long long ans = 1;

        for(long long i = 1; i * i <= x; i++)
        {
            if(x % i == 0)
            {
                if(n * i <= x)
                    ans = max(ans, i);

                if(n <= i)
                    ans = max(ans, x / i);
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
