/**
Online Judge : CodeForces
Problem No   : 1928A
Problem Name : Rectangle Cutting
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.015s
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
    int a, b;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d", &a, &b);

        if(a % 2 != 0 && b % 2 != 0)
            printf("NO\n");
        else if((a % 2 == 0 && a / 2 == b && b % 2 != 0) || (b % 2 == 0 && b / 2 == a && a % 2 != 0))
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
