#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int exploreIsland(vector<vector<int>> &grid, int i, int j)
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0)
        {
            return 0;
        }

        grid[i][j] = 0; // visited

        int area = 1;
        area += exploreIsland(grid, i + 1, j);
        area += exploreIsland(grid, i - 1, j);
        area += exploreIsland(grid, i, j + 1);
        area += exploreIsland(grid, i, j - 1);

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int maxArea = 0;

        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                if (grid[i][j] == 1)
                    maxArea = max(maxArea, exploreIsland(grid, i, j));
            }
        }

        return maxArea;
    }
};

// added for local
int main()
{
    Solution objek;

    vector<vector<int>> grid = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 1, 1}};

    int area = objek.maxAreaOfIsland(grid);

    cout << "Maximum Area of Island: " << area << endl;

    return 0;
}