/**
Online Judge : CodeForces
Problem No   : 339D
Problem Name : Xenia and Bit Operations
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.248s
Memory       : 3600KB
Algorithm    : Segment Tree
*/

#include<bits/stdc++.h>

#define pf(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)
#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)
#define PB push_back
#define MP make_pair
#define PI acos(-1.0)
#define ff first
#define ll long long
#define ss second
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n;i>0;i--)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define RFOR(i,a,b) for(int i=a;i>=b;i--)
#define QI queue<int>
#define SI stack<int>
#define PII pair<int,int>
#define MAX(a,b) max(a,b)
#define MOD 1000000007
#define INF 1<<30
#define mem(a,b) memset((a),(b),sizeof(a))
#define MAX3(a,b,c) max(a,max(b,c))
#define READ_INPUT_FILE() freopen("input.txt","r",stdin)

#define MAX_N (int) pow(2,17)

using namespace std;

int inp[MAX_N + 1];
ll tree[MAX_N * 3];

void build(int node, int start_node, int end_node, int operation)
{
    if(start_node == end_node)
    {
        tree[node] = inp[start_node];
        return;
    }

    int left = node << 1;
    int right = (node << 1) + 1;
    int mid = (start_node + end_node) >> 1;

    build(left, start_node, mid, operation == 0 ? 1 : 0);
    build(right, mid + 1, end_node, operation == 0 ? 1 : 0);

    tree[node] = operation == 0 ? tree[left] | tree[right] : tree[left] ^ tree[right];
}

void update(int node, int start_node, int end_node, int i, int v, int operation)
{
    if(i < start_node || i > end_node)
        return;

    if(start_node == end_node)
    {
        if (start_node == i) tree[node] = v;
        return;
    }

    int left = node << 1;
    int right = (node << 1) + 1;
    int mid = (start_node + end_node) >> 1;

    update(left, start_node, mid, i, v, operation == 0 ? 1 : 0);
    update(right, mid + 1, end_node, i, v, operation == 0 ? 1 : 0);

    ll lv = tree[left];
    ll rv = tree[right];

    tree[node] = operation == 0 ? lv | rv : lv ^ rv;
}

int main()
{
#ifndef ONLINE_JUDGE
    READ_INPUT_FILE();
#endif // ONLINE_JUDGE

    int n, m;
    int a;
    int p, b;

    while(sc2(n, m) == 2)
    {
        FOR(i, 1, (int) pow(2, n)) sc(inp[i]);
        build(1, 1, (int) pow(2, n), n % 2 == 0 ? 1 : 0);

        FOR(i, 1, m)
        {
            sc2(p, b);
            update(1, 1, (int) pow(2, n), p, b, n % 2 == 0 ? 1 : 0);

            printf("%lld\n", tree[1]);
        }
    }

    return 0;
}


