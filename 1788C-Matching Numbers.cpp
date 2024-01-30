/**
Online Judge : CodeForces
Problem No   : 1788C
Problem Name : Matching Numbers
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.046s
Memory       : 0KB
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
    long long n;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%lld", &n);

        if(n % 2 == 0)
            printf("NO\n");
        else
        {
            printf("YES\n");

            long long number_count = n * 2;
            long long sum = (number_count * (number_count + 1)) / 2;
            long long a = (n + (2 * sum) - (n * n)) / (2 * n);

            long long x = (number_count / 2) + 1;
            long long y = a - x;

            for(int i = 0; i < n; i++)
            {
                printf("%lld %lld\n", x, y);

                x += 1;
                if(y == n)
                    y = 1;
                else y++;
            }
        }
    }

    return 0;
}
