/**
Online Judge : CodeForces
Problem No   : 1918C
Problem Name : XOR-distance
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.031s
Memory       : 0KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

const int MAX_B = 60;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T;
    long long a, b, r;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%lld %lld %lld", &a, &b, &r);

        if(a > b)
        {
            a = a + b;
            b = a - b;
            a = a - b;
        }

        long long x = 0;
        bool first_diff = true;

        for(int i = MAX_B - 1; i >= 0; --i)
        {
            bool bit_a = a & (1ll << i);
            bool bit_b = b & (1ll << i);

            if(bit_a != bit_b)
            {
                if(first_diff)
                    first_diff = false;
                else
                {
                    if(!bit_a && x + (1ll << i) <= r)
                    {
                        x += (1ll << i);
                        a ^= (1ll << i);
                        b ^= (1ll << i);
                    }
                }
            }
        }

        printf("%lld\n", b - a);
    }

    return 0;
}
