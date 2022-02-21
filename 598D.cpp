/**
Online Judge : CodeForces
Problem No   : 598D
Problem Name : Igor In the Museum
Author       : Zubayer Rahman
Email        : zubayer.csesust@gmail.com
Time Limit   : 1.000s
CPU          : 0.624s
Memory       : 25000KB
Algorithm    : DFS
*/

#include<bits/stdc++.h>

using namespace std;

char matrix[1010][1010];
int visit[1010][1010];

class Sample
{
public:
    int x, y, id;

    Sample(int x, int y, int id)
    {
        this->x=x;
        this->y=y;
        this->id=id;
    }

    Sample(){}
};

Sample box[1010][1010];
map<int, int> mp;

void reset()
{
    int i, j;

    for(i=0; i<1010; i++)
        for(j=0; j<1010; j++)
            visit[i][j]=0;
}

int dx[]= {+1, -1, 0, 0};
int dy[]= {0, 0, +1, -1};

queue<Sample> q;

int main()
{
    int n, m, k;

    while(cin>>n>>m>>k)
    {

        reset();

        int i, j, compID=0, p, xx, yy;

        for(i=0; i<n; i++)
            scanf("%s", matrix[i]);

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(!visit[i][j] && matrix[i][j]!='*')
                {
                    box[i][j].x=i;
                    box[i][j].y=j;
                    box[i][j].id=++compID;

                    q.push(Sample(i, j, compID));

                    Sample samp;

                    while(!q.empty())
                    {
                        samp=q.front();
                        q.pop();

                        xx=samp.x;
                        yy=samp.y;

                        if(!visit[xx][yy])
                        {
                            visit[xx][yy]=1;

                            for(p=0; p<4; p++)
                            {
                                xx=samp.x+dx[p];
                                yy=samp.y+dy[p];

                                if((xx>=0 && xx<n) && (yy>=0 && yy<m) && !visit[xx][yy])
                                {
                                    if(matrix[xx][yy]=='*')
                                    {
                                        mp[samp.id]++;
                                    }
                                    else
                                    {
                                        box[xx][yy].x=xx;
                                        box[xx][yy].y=yy;
                                        box[xx][yy].id=samp.id;
                                        q.push(Sample(xx, yy, samp.id));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        int temp;

        for(i=0; i<k; i++)
        {
            cin>>n>>m;

            n--;
            m--;

            temp=box[n][m].id;

            cout<<mp[temp]<<endl;
        }

        mp.clear();
    }
    return 0;
}

