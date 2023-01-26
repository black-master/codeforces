/**
Online Judge : CodeForces
Problem No   : 1520B
Problem Name : Ordinary Numbers
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.093s
Memory       : 0KB
Algorithm    : Math
*/

#include<bits/stdc++.h>

using namespace std;

int T, n;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);

        int _count = 0;
        for(int i = 1; i <= 9; i++)
            for(int k = 0; k <= 8; k++)
            {
                int sum = 0;
                for(int l = 0; l <= k; l++)
                    sum += (int) pow(10, l);

                if(i * sum <= n)
                    _count++;
            }

        printf("%d\n", _count);
    }

    return 0;
}
