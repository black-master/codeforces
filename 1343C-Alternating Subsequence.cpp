/**
Online Judge : CodeForces
Problem No   : 1343C
Problem Name : Alternating Subsequence
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.109s
Memory       : 100KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T, n;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        long long numbers[n];
        for(int i = 0; i < n; i++) scanf("%lld", &numbers[i]);

        long long sum = 0;

        for(int i = 0; i < n;)
        {
            long long _max = numbers[i];
            int k = i;

            while(k < n && (numbers[i]^numbers[k]) >= 0)
            {
                _max = max(_max, numbers[k]);
                k++;
            }

            sum += _max;
            i = k;
        }

        cout << sum << endl;
    }

    return 0;
}
