/**
Online Judge : CodeForces
Problem No   : 1920B
Problem Name : Summation Game
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.062s
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
    int n, k, x;

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d %d", &n, &k, &x);

        int numbers[n + 1] = {0};

        for(int idx = 1; idx <= n; idx++)
            scanf("%d", &numbers[idx]);

        sort(numbers + 1, numbers + 1 + n);

        for(int idx = 1; idx <= n; idx++)
            numbers[idx] += numbers[idx - 1];

        int result = -1e9;

        for(int i = 0; i <= k; i++)
            result = max(result, numbers[max(0, n - i - x)] - (numbers[max(0, n - i)] - numbers[max(0, n - i - x)]));

        printf("%d\n", result);
    }

    return 0;
}
