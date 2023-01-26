/**
Online Judge : CodeForces
Problem No   : 231A
Problem Name : Team
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.0s
Memory       : 0KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int n;
int a, b, c;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    scanf("%d", &n);
    int sum[n + 1];

    for(int i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        sum[i] = a + b + c;
    }

    int result = 0;
    for(int i = 1; i <= n; i++)
        if(sum[i] >= 2)
            result++;

    printf("%d\n", result);

    return 0;
}
