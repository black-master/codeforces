/**
Online Judge : CodeForces
Problem No   : 1800B
Problem Name : Count the Number of Pairs
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.015s
Memory       : 200KB
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
    int n, k;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d", &n, &k);

        char str[n + 1];

        getchar();
        scanf("%[^\n]%*c", str);

        int cnt[52] = {};

        int length = strlen(str);
        for(int i = 0; i < length; i++)
            cnt[str[i] < 'a' ? str[i] - 'A' : str[i] - 'A' - 6]++;

        int result = 0;

        for(int i = 0; i < 26; i++)
        {
            int pairs = min(cnt[i], cnt[i + 26]);
            result += pairs;

            int bonus = min(k, max(cnt[i] - pairs, cnt[i + 26] - pairs) / 2);
            result += bonus;
            k -= bonus;
        }

        printf("%d\n", result);
    }

    return 0;
}
