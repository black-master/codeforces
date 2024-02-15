/**
Online Judge : CodeForces
Problem No   : 1928B
Problem Name : Equalize
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.156s
Memory       : 7200KB
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
    int n, number;

    scanf("%d", &T);

    while(T--)
    {
        set<int> s;

        scanf("%d", &n);

        for(int idx = 0; idx < n; idx++)
        {
            scanf("%d", &number);
            s.insert(number);
        }

        int length = s.size();
        int numbers[length];

        auto itr = s.begin();

        for(int idx = 0; idx < length; idx++)
        {
            numbers[idx] = *itr;
            itr++;
        }

        int front_index = 0;
        int back_index = 1;

        int result = 1;
        int diff;

        for(; back_index < length;)
        {
            diff = numbers[back_index] - numbers[front_index] + 1;

            if(diff <= n)
            {
                if(back_index - front_index + 1 > result)
                    result = back_index - front_index + 1;

                back_index++;
            }
            else front_index++;
        }

        printf("%d\n", result);
    }

    return 0;
}
