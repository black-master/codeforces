/**
Online Judge : CodeForces
Problem No   : 200B
Problem Name : Drinks
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.030s
Memory       : 1000KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int n;
    scanf("%d", &n);

    int sum = 0;
    int val;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        sum += val;
    }

    printf("%.12lf\n", (double) sum / n);

    return 0;
}
