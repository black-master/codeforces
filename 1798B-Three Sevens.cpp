/**
Online Judge : CodeForces
Problem No   : 1798B
Problem Name : Three Sevens
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.046s
Memory       : 2100KB
Algorithm    : Implementation
*/

#include<bits/stdc++.h>

using namespace std;

#define MAX_N 50000

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int T;
    int m, n, num;
    int participants[MAX_N + 1] = {};

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &m);

        vector<vector<int>> v;

        for(int i = 0; i < m; i++)
        {
            scanf("%d", &n);

            vector<int> numbers;
            for(int k = 0; k < n; k++)
            {
                scanf("%d", &num);
                participants[num] = i + 1;

                numbers.push_back(num);
            }

            v.push_back(numbers);
        }

        queue<int> winners;

        for(int day = 0; day < m; day++)
        {
            int winner = -1;

            for(int num : v[day])
                if(participants[num] == day + 1)
                {
                    winner = num;
                    break;
                }

            if(winner != -1)
                winners.push(winner);
            else
                break;
        }

        if(winners.size() == m)
        {
            while(true)
            {
                printf("%d", winners.front());
                winners.pop();

                if(winners.empty())
                    break;

                printf(" ");
            }

            printf("\n");
        }
        else printf("-1\n");
    }

    return 0;
}
