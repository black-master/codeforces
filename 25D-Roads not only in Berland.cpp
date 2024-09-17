/**
Online Judge : CodeForces
Problem No   : 25D
Problem Name : Roads not only in Berland
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.124s
Memory       : 100KB
Algorithm    : DSU
*/

#include<bits/stdc++.h>

using namespace std;

#define MAX_N 1000

int find_parent(int x, int Q[])
{
    int parent_x = Q[x];

    while(true)
    {
        if(parent_x < 0) return x;

        x = parent_x;
        parent_x = Q[x];
    }
}

void make_road(int x, int y, int Q[], vector<pair<int, int>> &v)
{
    int parent_x = find_parent(x, Q);
    int parent_y = find_parent(y, Q);

    if(parent_x == parent_y)
        v.push_back(make_pair(x, y));
    else
    {
        if(Q[parent_x] <= Q[parent_y])
        {
            Q[parent_x] += Q[parent_y];
            Q[parent_y] = parent_x;
        }
        else
        {
            Q[parent_y] += Q[parent_x];
            Q[parent_x] = parent_y;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif // ONLINE_JUDGE

    int n;

    while(scanf("%d", &n) == 1)
    {
        int Q[n + 1];
        int x, y;

        vector<pair<int, int>> v;

        fill(Q, Q + n + 1, -1);

        for(int i = 1; i < n; i++)
        {
            scanf("%d %d", &x, &y);
            make_road(x, y, Q, v);
        }

        printf("%d\n", (int) v.size());

        for(int i = 1; i <= n; i++)
            if(Q[i] < 0)
                for(int j = i + 1; j <= n; j++)
                    if(Q[j] < 0)
                    {
                        pair<int, int> P = v.back();

                        printf("%d %d %d %d\n", P.first, P.second, i, j);

                        Q[i] += Q[j];
                        Q[j] = i;

                        v.pop_back();
                    }
    }

    return 0;
}
