/**
Online Judge : CodeForces
Problem No   : 1861B
Problem Name : Two Binary Strings
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 2.000s
CPU          : 0.015s
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
    string a, b;

    scanf("%d", &T);

    while(T--)
    {
        cin >> a;
        cin >> b;

        if(a == b)
            printf("YES\n");
        else
        {
            int length_a = a.size();
            int length_b = b.size();

            int result = false;

            for(int idx = 0; idx < length_a - 1; idx++)
                if(a[idx] == '0' && b[idx] == '0' && a[idx + 1] == '1' && b[idx + 1] == '1')
                {
                    result = true;
                    break;
                }

            if(result)
                printf("YES\n");
            else printf("NO\n");
        }
    }

    return 0;
}
