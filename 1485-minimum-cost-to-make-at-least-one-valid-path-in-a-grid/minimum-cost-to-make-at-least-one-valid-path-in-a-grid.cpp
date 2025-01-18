class Solution {
public:
    
    int minCost(vector<vector<int>>& grid) 
    {
        int rows = grid.size();
        int cols = grid[0].size();

        // Directions: (dx, dy, direction value)
        vector<tuple<int, int, int>> directions = {
            {0, 1, 1},  // Right
            {0, -1, 2}, // Left
            {1, 0, 3},  // Down
            {-1, 0, 4}  // Up
        };

        // Priority queue: (cost, x, y)
        deque<tuple<int, int, int>> dq;
        dq.push_front({0, 0, 0}); // Start with cost 0 at (0, 0)

        vector<vector<int>> cost(rows, vector<int>(cols, INT_MAX));
        cost[0][0] = 0;

        while (!dq.empty()) {
            auto [curr_cost, x, y] = dq.front();
            dq.pop_front();

            // If we reached the bottom-right cell
            if (x == rows - 1 && y == cols - 1) {
                return curr_cost;
            }

            for (auto [dx, dy, dir] : directions) {
                int nx = x + dx;
                int ny = y + dy;

                // Check bounds
                if (nx >= 0 && ny >= 0 && nx < rows && ny < cols) {
                    int new_cost = curr_cost + (grid[x][y] != dir ? 1 : 0);

                    // Update cost and add to deque
                    if (new_cost < cost[nx][ny]) {
                        cost[nx][ny] = new_cost;

                        if (grid[x][y] == dir) {
                            dq.push_front({new_cost, nx, ny}); // Push with priority (0 cost move)
                        } else {
                            dq.push_back({new_cost, nx, ny}); // Push normally (1 cost move)
                        }
                    }
                }
            }
        }

        return -1; // If no path is found (shouldn't happen with valid input)
    }
};