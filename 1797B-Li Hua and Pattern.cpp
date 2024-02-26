/**
Online Judge : CodeForces
Problem No   : 1797B
Problem Name : Li Hua and Pattern
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.202s
Memory       : 3900KB
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
    long long k;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %lld", &n, &k);

        int cell[n + 1][n + 1] = {0};

        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                scanf("%d", &cell[i][j]);

        long long operation_count = 0;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                int io = n - (i - 1);
                int jo = n - (j - 1);

                if(cell[i][j] != cell[io][jo])
                    operation_count += 1;
            }
        }

        operation_count /= 2;

        if(operation_count > k)
            printf("NO\n");
        else
        {
            if(n % 2 == 1 || (n % 2 == 0 && (k - operation_count) % 2 == 0))
                printf("YES\n");
            else printf("NO\n");
        }
    }

    return 0;
}
