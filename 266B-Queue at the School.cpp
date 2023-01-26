/**
Online Judge : CodeForces
Problem No   : 266B
Problem Name : Queue at the School
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.030s
Memory       : 0KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

int n, t;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    scanf("%d %d", &n, &t);
    char x[n + 1];

    getchar();
    for(int i = 0; i < n; i++)
        scanf("%c", &x[i]);

    for(int i = 1; i <= t ; i++)
        for(int j = 1; j < n; j++)
            if(x[j] == 'G' && x[j - 1] == 'B')
            {
                x[j] = 'B';
                x[j - 1] = 'G';

                j++;
            }

    for(int i = 0; i < n; i++)
        printf("%c", x[i]);

    printf("\n");

    return 0;
}
