/**
Online Judge : CodeForces
Problem No   : 1916B
Problem Name : Two Divisors
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.031s
Memory       : 0KB
Algorithm    : Number Theory / Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T;
    long long a, b;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%lld %lld", &a, &b);

        if(b % a == 0)
            printf("%lld\n", (b * b) / a);
        else
            printf("%lld\n", (a * b) / gcd(a, b));
    }

    return 0;
}
