#include <iostream>
using namespace std;

int visit[4] = {0};
int a[4][4] = {{0, 1, 1, 1},
               {1, 0, 1, 1},
               {1, 1, 0, 1},
               {1, 1, 1, 0}};

void dfs(int i)
{
    cout << i << " ";
    visit[i] = 1;
    for (int j = 0; j < 4; j++)
    {
        if (a[i][j] == 1 && visit[j] != 1)
        {
            // cout << i << " " << j << endl;
            dfs(j);
        }
    }
}

int main()
{
    int start = 0;
    dfs(start);
}
