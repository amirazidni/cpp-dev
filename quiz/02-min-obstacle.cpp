#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

int minObstaclesToRemove(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> minObstacles(m, vector<int>(n, INT_MAX));
    minObstacles[0][0] = grid[0][0]; // Inisialisasi

    queue<pair<int, int>> q;
    q.push({0, 0});

    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        for (auto &dir : directions)
        {
            int ni = i + dir.first;
            int nj = j + dir.second;

            if (ni >= 0 && ni < m && nj >= 0 && nj < n)
            {
                int newObstacles = minObstacles[i][j] + grid[ni][nj];
                if (newObstacles < minObstacles[ni][nj])
                {
                    minObstacles[ni][nj] = newObstacles;
                    q.push({ni, nj});
                }
            }
        }
    }

    return minObstacles[m - 1][n - 1];
}

int main()
{
    vector<vector<int>> grid = {
        {0, 0, 0},
        {1, 1, 0},
        {0, 0, 0},
        {0, 1, 1},
        {0, 0, 0}};

    int minObstacles = minObstaclesToRemove(grid);

    cout << "Minimum obstacles to remove: " << minObstacles << endl;

    return 0;
}
