/**
Online Judge : CodeForces
Problem No   : 1781B
Problem Name : Going to the Cinema
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.062s
Memory       : 800KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int T, n, a;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);

        int numbers[n + 1];
        memset(numbers, 0, sizeof(numbers));

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            numbers[a]++;
        }

        int result = 0;
        int _sum = 0;
        for(int i = 0; i <= n; i++)
        {
            if(numbers[i] == 0 && _sum == i)
                result++;

            _sum += numbers[i];
        }

        printf("%d\n", result);
    }

    return 0;
}
