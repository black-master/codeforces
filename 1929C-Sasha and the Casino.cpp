/**
Online Judge : CodeForces
Problem No   : 1929C
Problem Name : Sasha and the Casino
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.0s
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
    int k, x;
    long long a;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d %lld", &k, &x, &a);

        long long lost = 1;

        for(int i = 2; i <= x; i++)
        {
            lost += (long long)((double)((double)(lost / (k - 1)) + 1));

            if(lost > a) break;
        }

        if(lost > a)
            printf("NO\n");
        else if((a - lost)*k > a)
            printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
