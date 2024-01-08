/**
Online Judge : CodeForces
Problem No   : 1896B
Problem Name : AB Flipping
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.046s
Memory       : 500KB
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
    int n;
    string s;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        cin >> s;

        int idx_A_min = n, idx_B_max = -1;

        for(int idx = 0; idx < n; idx++)
        {
            if(s[idx] == 'A' && idx < idx_A_min)
                idx_A_min = idx;
            if(s[idx] == 'B' && idx > idx_B_max)
                idx_B_max = idx;
        }

        if(idx_A_min > idx_B_max)
            printf("0\n");
        else printf("%d\n", idx_B_max - idx_A_min);
    }

    return 0;
}
