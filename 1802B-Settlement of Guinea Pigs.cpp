/**
Online Judge : CodeForces
Problem No   : 1802B
Problem Name : Settlement of Guinea Pigs
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
    int n, b;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        int known = 0, unknown = 0, result = 0;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &b);
            if(b == 1)
                unknown++;
            else
            {
                known += unknown;
                unknown = 0;
            }

            result = max(result, unknown + (known ? known / 2 + 1 : 0));
        }

        printf("%d\n", result);
    }

    return 0;
}
