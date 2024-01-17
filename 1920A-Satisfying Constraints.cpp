/**
Online Judge : CodeForces
Problem No   : 1920A
Problem Name : Satisfying Constraints
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.031s
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
    int n, a, k;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        int min_val = 0;
        int max_val = 1e9 + 1;

        queue<int> q;

        for(int idx = 0; idx < n; idx++)
        {
            scanf("%d %d", &a, &k);

            if(a == 3)
                q.push(k);
            else
            {
                if(a == 1 && k > min_val)
                    min_val = k;

                if(a == 2 && k < max_val)
                    max_val = k;
            }
        }

        if(min_val > max_val)
            printf("0\n");
        else
        {
            int ans = max_val - min_val + 1;

            while(!q.empty())
            {
                k = q.front();
                if(k >= min_val && k <= max_val)
                    ans--;

                q.pop();
            }

            printf("%d\n", ans);
        }
    }

    return 0;
}
