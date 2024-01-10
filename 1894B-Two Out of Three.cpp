/**
Online Judge : CodeForces
Problem No   : 1894B
Problem Name : Two Out of Three
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 3.000s
CPU          : 0.015s
Memory       : 0KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

#define MAX_N 100

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T;
    int n;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        int num;
        int numbers[MAX_N];
        int cnt[MAX_N + 1] = {};

        int result[n];
        fill_n(result, n, 1);

        for(int idx = 0; idx < n; idx++)
        {
            scanf("%d", &num);

            cnt[num]++;
            numbers[idx] = num;
        }

        int multiple_types = 0;
        int quota_2 = 1;
        int quota_3 = 1;

        for(int idx = 1; idx <= MAX_N; idx++)
            if(cnt[idx] >= 2)
            {
                multiple_types++;

                for(int k = 0; k < n; k++)
                    if(numbers[k] == idx)
                        if(multiple_types == 1 && quota_2)
                        {
                            result[k] = 2;
                            quota_2--;
                        }
                        else if(multiple_types == 2 && quota_3)
                        {
                            result[k] = 3;
                            quota_3--;
                        }

                if(multiple_types == 2)
                    break;
            }

        if(multiple_types < 2)
            printf("-1\n");
        else
        {
            for(int idx = 0; idx < n; idx++)
                cout << result[idx] << " ";

            cout << endl;
        }
    }

    return 0;
}
