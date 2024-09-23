/**
Online Judge : CodeForces
Problem No   : 1793B
Problem Name : Fedya and Array
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.124s
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

    int T;
    int x, y;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d", &x, &y);

        printf("%d\n", (x - y) * 2);

        for(int i = y; i <= x; i++)
            printf("%d ", i);

        for(int i = x - 1; i > y; i--)
            printf("%d ", i);

        printf("\n");
    }

    return 0;
}
