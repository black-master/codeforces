/**
Online Judge : CodeForces
Problem No   : 1913B
Problem Name : Swap and Delete
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.077s
Memory       : 500KB
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
    string s;

    scanf("%d", &T);

    while(T--)
    {
        cin >> s;

        int cnt_0 = 0, cnt_1 = 0;
        int string_length = s.length();

        for(int idx = 0; idx < string_length; idx++)
            if(s[idx] == '0')
                cnt_0++;
            else cnt_1++;

        int new_string_length = 0;

        for(int idx = 0; idx < string_length; idx++)
        {
            if(s[idx] == '0')
                if(cnt_1 == 0)
                    break;
                else
                    cnt_1--;
            else
            {
                if(cnt_0 == 0)
                    break;
                else cnt_0--;
            }

            new_string_length++;
        }

        printf("%d\n", string_length - new_string_length);
    }

    return 0;
}
