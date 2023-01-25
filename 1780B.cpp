/**
Online Judge : CodeForces
Problem No   : 1780B
Problem Name : GCD Partition
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.124s
Memory       : 1564KB
Algorithm    : Math/Number Theory
*/

#include<bits/stdc++.h>

using namespace std;

int T, n;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);

        long long sum = 0;
        long long numbers[n + 1];
        for(int i = 1; i <= n ; i++)
        {
            scanf("%lld", &numbers[i]);
            sum += numbers[i];
        }

        long long answer = 1;
        long long prefix = 0;
        for(int i = 1; i < n ; i++)
        {
            prefix += numbers[i];
            sum -= numbers[i];
            answer = max(answer, __gcd(sum, prefix));
        }

        printf("%lld\n", answer);
    }

    return 0;
}
