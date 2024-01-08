/**
Online Judge : CodeForces
Problem No   : 1900B
Problem Name : Laura and Operations
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.389s
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
    int a, b, c;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d %d", &a, &b, &c);

        int result_a = (b % 2 == 0 && c % 2 == 0) || (b % 2 == 1 && c % 2 == 1) ? 1 : 0;
        int result_b = (a % 2 == 0 && c % 2 == 0) || (a % 2 == 1 && c % 2 == 1) ? 1 : 0;
        int result_c = (a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1) ? 1 : 0;

        cout << result_a << " " << result_b << " " << result_c << endl;
    }

    return 0;
}
