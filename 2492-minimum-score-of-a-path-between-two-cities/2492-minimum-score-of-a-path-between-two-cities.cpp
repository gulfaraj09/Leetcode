class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        // 1. Build an Adjacency List: adj[from] = { {to, distance}, ... }
        vector<vector<pair<int, int>>> adj(n + 1);
        for (const auto& r : roads) {
            int u = r[0];
            int v = r[1];
            int dist = r[2];
            adj[u].push_back({v, dist});
            adj[v].push_back({u, dist}); // Graph is bidirectional
        }

        // 2. Track visited cities to avoid infinite loops
        vector<bool> visited(n + 1, false);
        
        // 3. Queue for standard Breadth-First Search (BFS)
        queue<int> q;
        
        // Seed the traversal starting at city 1
        q.push(1);
        visited[1] = true;
        
        int min_road_score = INT_MAX;

        // 4. Traverse the connected component
        while (!q.empty()) {
            int current_city = q.front();
            q.pop();

            // Look at all neighboring roads connected to this city
            for (const auto& neighbor : adj[current_city]) {
                int next_city = neighbor.first;
                int road_distance = neighbor.second;

                // Continuously update the absolute smallest edge seen anywhere in this component
                min_road_score = min(min_road_score, road_distance);

                // If we haven't visited the neighboring city yet, add it to the queue
                if (!visited[next_city]) {
                    visited[next_city] = true;
                    q.push(next_city);
                }
            }
        }

        return min_road_score;
    }
};
