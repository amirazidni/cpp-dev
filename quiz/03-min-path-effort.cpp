#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

void dijkstra(vector<vector<int>> &grid, int start)
{
    int n = grid.size();
    vector<int> distance(n * n, INT_MAX);
    vector<bool> visited(n * n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    distance[start] = grid[start / n][start % n];
    pq.push({distance[start], start});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        if (visited[u])
            continue;
        visited[u] = true;

        int row = u / n;
        int col = u % n;

        // Mengecek tetangga atas, bawah, kiri, dan kanan
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; ++i)
        {
            int newRow = row + dr[i];
            int newCol = col + dc[i];

            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n)
            {
                int v = newRow * n + newCol;
                int w = grid[newRow][newCol];

                if (distance[u] + w < distance[v])
                {
                    distance[v] = distance[u] + w;
                    pq.push({distance[v], v});
                }
            }
        }
    }

    // Hasil akhir: distance[] akan berisi jarak terpendek dari node start ke semua node lainnya.
    for (vector<int>::iterator it = distance.begin(); it != distance.end(); ++it)
    {
        cout << *it << " ";
    }
}

int main()
{
    vector<vector<int>> grid = {{1, 2, 2}, {3, 8, 2}, {5, 3, 5}};
    int startNode = 0; // Misalnya, memulai dari sudut kiri atas

    dijkstra(grid, startNode);

    return 0;
}
