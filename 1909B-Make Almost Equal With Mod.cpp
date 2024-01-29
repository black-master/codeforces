/**
Online Judge : CodeForces
Problem No   : 1909B
Problem Name : Make Almost Equal With Mod
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.046s
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
    int n;
    long long num;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        long long numbers[n];
        int even_count = 0;

        for(int idx = 0; idx < n; idx++)
        {
            scanf("%lld", &num);
            even_count += num % 2 == 0 ? 1 : 0;

            numbers[idx] = num;
        }

        if(even_count == 0 || even_count == n)
        {
            long long k = 2;

            while(true)
            {
                set<long long> st;

                for(int idx = 0; idx < n; idx++)
                    st.insert(numbers[idx] % k);

                if(st.size() == 2)
                {
                    printf("%lld\n", k);
                    break;
                }
                else k *= 2;
            }
        }
        else printf("2\n");
    }

    return 0;
}
