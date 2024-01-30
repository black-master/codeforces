/**
Online Judge : CodeForces
Problem No   : 1778A
Problem Name : Drinks
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.031s
Memory       : 400KB
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
    int n, num;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        int count_positive = 0, count_negative = 0;
        int numbers[n];

        for(int idx = 0; idx < n; idx++)
        {
            scanf("%d", &num);

            count_positive += num > 0 ? 1 : 0;
            count_negative += num < 0 ? 1 : 0;

            numbers[idx] = num;
        }

        if(count_negative == 0)
        {
            count_positive -= 2;
            count_negative += 2;
        }
        else
        {
            for(int idx = 0; idx < n - 1; idx++)
                if(numbers[idx] == -1 && numbers[idx + 1] == -1)
                {
                    count_positive += 2;
                    count_negative -= 2;
                    break;
                }
        }

        printf("%d\n", count_positive - count_negative);
    }

    return 0;
}
