/**
Online Judge : CodeForces
Problem No   : 1788B
Problem Name : Sum of Two Numbers
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.030s
Memory       : 0KB
Algorithm    : Implementation / Math
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T;
    int n, x, y;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        if(n % 2 == 0)
            x = y = n / 2;
        else
        {
            if(n % 20 == 19)
            {
                x = y = 0;
                int flag = 0;
                int multiplier = 1;

                while(n)
                {
                    int rem = n % 10;

                    x = (((rem / 2) + (rem % 2 == 1 ? flag ? 1 : 0 : 0)) * multiplier) + x;
                    y = (((rem / 2) + (rem % 2 == 1 ? flag ? 0 : 1 : 0)) * multiplier) + y;

                    multiplier *= 10;

                    if(rem % 2 == 1)
                        flag = flag ? 0 : 1;

                    n /= 10;
                }
            }
            else
            {
                x = n / 2;
                y = n - x;
            }
        }

        printf("%d %d\n", x, y);
    }

    return 0;
}
